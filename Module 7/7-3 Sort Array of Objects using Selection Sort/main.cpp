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

    student *a=new student[n];

    for(int i=0; i<n; i++)
    {

        cin.ignore();//Or getchar();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {

            if(a[i].marks<a[j].marks)
            {
                swap(a[i],a[j]);
            }
            if(a[i].marks==a[j].marks)
            {
                if(a[i].roll>a[j].roll)
                {
                    swap(a[i],a[j]);
                }
            }

        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }



/*
4
Rakibul islam
10 85
Zahidul islam
12 85
Saiful khan
45 89
Rafizul islam
24 67
*/


    return 0;
}
