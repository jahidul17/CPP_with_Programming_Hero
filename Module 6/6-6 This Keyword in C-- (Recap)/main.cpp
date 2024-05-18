#include <iostream>

using namespace std;

class person
{

public:
    string name;
    int age;
    int marks1;
    int marks2;

    person(string name, int age, int marks1,int marks2)       //constractor must same as class name
    {

        (*this).name=name;
        (*this).age=age;
        this->marks1=marks1;
        this->marks2=marks2;

        //Use same variable (*this).name=name or this->name=name;

    }

    void hello()
    {
        // cout<<"Hello World"<<endl;
        cout<<name<<" "<<age<<endl;
    }

    int totalmarks()
    {

        return marks1+marks2;
    }


};

int main()
{


    person jahid("Zahidul islam",23,70,90);   //Now it is string contain dynamic array
    /*
    cout<<jahid.name<<" "<<jahid.age<<endl;
    */


    jahid.hello();
    cout<<jahid.totalmarks()<<endl;




    return 0;
}
