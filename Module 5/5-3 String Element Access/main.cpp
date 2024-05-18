#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="Zahidul";

    cout<<s[0]<<endl;//Direct access []

    cout<<s.at(0)<<endl;//Use built in function ()

    cout<<s[s.size()-1]<<endl;

    cout<<s.back()<<endl;

    cout<<s.front()<<endl;


    return 0;
}
