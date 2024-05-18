#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    /*
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
    */

    /*
    cout<<*s.begin()<<endl; //access for first index;
    cout<<*(s.end()-1)<<endl; //access for last index;But its can't access middle index;
    //So use iterators.

    */


    //Now start Iterators

    string::iterator it;

    //for(string::iterator it=s.begin();it<s.end();it++){
    //Or
    //for(auto it=s.begin();it<s.end();it++){

    for(it=s.begin(); it<s.end(); it++)
    {
        cout<<*it<<endl;
    }




    return 0;
}
