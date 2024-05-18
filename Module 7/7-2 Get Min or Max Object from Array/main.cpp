#include <bits/stdc++.h>

using namespace std;

class student
{
public:
    string name;
    int roll;
    int marks;


};

int main()
{
    int n;
    cin>>n;

    //student a[n];
    student *a=new student[n];  //Dynamic array same as > int *a=new student[n];

    for(int i=0; i<n; i++)
    {

        cin.ignore();//Or getchar();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
    }

    student mn;
    //mn.marks=INT_MAX;   //min digit
     mn.marks=INT_MIN;   //max digit

    for(int i=0; i<n; i++)
    {
        if(a[i].marks>mn.marks)
        {
            mn=a[i];
        }
    }

    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;

    return 0;
}
