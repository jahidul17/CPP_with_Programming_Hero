#include <iostream>

using namespace std;

class person
{

public:
    string name;
    int age;
    int marks1;
    int marks2;

    person(string nm, int ag, int m1,int m2)       //constractor must same as class name
    {

        name=nm;
        age=ag;
        marks1=m1;
        marks2=m2;

    }

    void hello()
    {
        // cout<<"Hello World"<<endl;
        cout<<name<<" "<<age<<endl;
    }

    int totalmarks(){

        return marks1+marks2;
    }


};

int main()
{


    person jahid("Zahidul islam",23,80,90);   //Now it is string contain dynamic array
    /*
    cout<<jahid.name<<" "<<jahid.age<<endl;
    */


    jahid.hello();
    cout<<jahid.totalmarks()<<endl;




    return 0;
}
