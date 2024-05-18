#include <bits/stdc++.h>

using namespace std;

class student
{
public:
    int roll;
    int cls;
    double cgpa;

    //constractor
    student(int roll,int cls,double gp)
    {

        (*this).roll=roll;
        this->cls=cls;
        this->cgpa=gp;
    }

};

student fun()
{
    //Here student as a data type.
    student zahid(68,14,3.75);//Here zahid is variable/object
    return zahid;

}


int main()
{
    student ans=fun();
    cout<<ans.roll<<" "<<ans.cls<<" "<<ans.cgpa;

    return 0;
}
