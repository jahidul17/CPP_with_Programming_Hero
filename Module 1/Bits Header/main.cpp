#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Include all header file in c and c++ with in one header----
    //#include <bits/stdc++.h>

        int a,b,c,d,mn,mx;

    cin>>a>>b>>c>>d;

    //when compear two value
    //#include <algorithm>
    mn=min(a,b);

    //When compear multiple value
    //#include <algorithm>
    mx=max({a,b,c,d});
    cout<<"Min value between a and b = "<<mn<<endl;
    cout<<"Max value among a,b,c,d = "<<mx<<endl;

    //#include <algorithm>
    swap(a,b);
    cout<<"Swap a and b = "<<a<<" "<<b<<endl;
    return 0;
}
