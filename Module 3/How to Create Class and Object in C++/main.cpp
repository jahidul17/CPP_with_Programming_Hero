#include <bits/stdc++.h>

using namespace std;

class student{

public:
    char name[100];
    int roll;
    double cgpa;

};


int main()
{
    student a,b;

    /*
    //When user input string
    a.roll=34;
    a.cgpa=858.599;
    char temp[100]="Rakibul islam";
    strcpy(a.name,temp);
    */



    cin>>a.name>>a.roll>>a.cgpa;
    cin>>b.name>>b.roll>>b.cgpa;


    /*
    //When we get space in string
    cin.getline(a.name,100);
    cin>>a.roll>>a.cgpa;
    getchar();

    cin.getline(b.name,100);
    cin>>b.roll>>b.cgpa;
    */

    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<endl;


    return 0;
}
