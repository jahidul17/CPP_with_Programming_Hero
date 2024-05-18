#include <bits/stdc++.h>

using namespace std;

class person
{

public:
    string name;
    int age;


    person(string name, int age)  //constractor must same as class name
    {

        (*this).name=name;
        (*this).age=age;

    }

};

int main()
{


    person* zahid=new person("zahidul islam",23);   //Now it is string contain dynamic array

    person* johirul=new person("johirul islam",15);


    /*
    //johirul=zahid;  //copy

    cout<<jahid.name<<" "<<jahid.age<<endl;
    cout<<zohirul.name<<" "<<zohirul.age<<" "<<zohirul.marks1<<endl;
    */
    //delete zahid;

    //johirul->name=zahid->name;
    //johirul->age=zahid->age;
    //Or


    *johirul=*zahid;
     delete zahid;

    cout<<johirul->name<<" "<<johirul->age<<endl;


    return 0;
}
