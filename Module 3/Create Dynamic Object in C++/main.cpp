#include <bits/stdc++.h>

using namespace std;

class student{

public:
    int roll;
    int cls;
    double gpa;

    student(int roll,int cls,double gpa){

        this->roll = roll;
        this->cls =cls;
        this->gpa =gpa;

    }

};


student * fun(){

    student* karim = new student(489,48,485.484);

    return karim;

}


int main()
{

    //Without function access
    //student* karim = new student(489,48,485.484);
    //cout<<(*karim).roll<<" "<<karim->cls<<" "<<karim->gpa;

    student *ans=fun();

    cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<endl;

    delete ans;

    cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<endl;

    return 0;
}
