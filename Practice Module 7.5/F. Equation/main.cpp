#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,n;
    long long int y,sum=0;
    cin>>x>>n;

    for(int i=2; i<n; i++)
    {
        if(i%2==0)
        {
             y=pow(x*1.0,i*1.0);
            sum=sum+y;
        }
    }

    cout<<sum;

    return 0;
}
