#include <bits/stdc++.h>

using namespace std;

class student
{
public:
    string name;
    int roll;
    int marks;


};

bool cmp(student a,student b)
{
    if(a.marks>b.marks)
    {
        return true;
    }
    else if(a.marks<b.marks)
    {
        return false;
    }
    else
    {
        if(a.roll<b.roll)
        {
            return true;
        }
        else
        {
            return false;
        }

    }

    //Or return a.marks<b.marks;
}

int main()
{
    int n;
    cin >>n;
    student a[n];

    for(int i=0; i<n; i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;

    }

    sort(a,a+n,cmp);

    for(int i=0; i<n; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }



    /*
4
Zahidul islam
38 93
Saidul patoary
32 87
Ariful islam
44 93
Hasinur
23 85
    */

    return 0;
}
