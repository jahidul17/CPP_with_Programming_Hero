#include <bits/stdc++.h>

using namespace std;

int main()
{
    //<-------60
    //=-------61
    //>-------62

    int a,b;
    char s;

    cin>>a>>s>>b;

    int x=int(s);

    if(x==60)
    {
        if(a<b)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        }

    }

    else if(x==61)
    {
        if(a=b)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        }

    }
    else if(x==62)
    {

        if(a>b)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        }

    }


    return 0;
}
