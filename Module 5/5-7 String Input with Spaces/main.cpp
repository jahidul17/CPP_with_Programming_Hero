#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    string s;
    // cin>>s; //can not contain space in string

    cin>>x;

    //getchar();  //This fun contain enter otherwise can not access getline fun
    cin.ignore();
    getline(cin,s);


    cout<<x<<endl;
    cout<<s<<endl;


    return 0;
}
