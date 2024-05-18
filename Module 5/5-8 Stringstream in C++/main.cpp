#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream st(s); //Here st is object and constractor.
    //st(s) Or st<<s;
    string word;

    /*
    st>>word;
    cout<<word<<endl;

    st>>word;
    cout<<word<<endl;

    st>>word;
    cout<<word<<endl;
    */

    while(st>>word){
        cout<<word;
    }


    return 0;
}
