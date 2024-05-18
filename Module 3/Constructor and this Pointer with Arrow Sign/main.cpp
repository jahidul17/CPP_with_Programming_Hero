#include <bits/stdc++.h>

using namespace std;

class student
{

public:
    int roll;
    int cls;
    double cgpa;

    //Constructor name and class name must be same.

    /*
    student(int r,int c,double g)
    {
        roll=r;
        cls=c;
        cgpa=g;

    }
    */

    //When parameter use same variable

    student (int roll,int cls,double gp){
        //this keyword use for point variable in this class.
        // * use for dreference/pointer
        (*this).roll=roll;
        //On other hand use(->) and it is both dreference + access.
        this->cls=cls;
        (*this).cgpa=gp;
    }




};

int main()
{
    student jahidul(40,9,958.589);// Here student is class and zahidul is object.
    student karim(30,4,367.73);

    cout<<jahidul.roll<<" "<<jahidul.cls<<" "<<jahidul.cgpa<<endl;
    cout<<karim.roll<<" "<<karim.cls<<" "<<karim.cgpa<<endl;


    return 0;
}
