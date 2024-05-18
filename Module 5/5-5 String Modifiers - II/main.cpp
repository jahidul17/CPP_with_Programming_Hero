#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a="HelloWorld";

    /*
    //a="Gello";//or
    a.assign("Gello");

    cout<<a<<endl;
    */


    /*
    //a.erase(4);
    //cout<<a<<endl;

    a.erase(4,2);
    cout<<a<<endl;
    */


    //a.replace(4,2,"So");//erase+replace
    //a.replace(5,0,"SM");//in position; not Delete or

    a.insert(5,"Zahid");

    cout<<a;


    return 0;
}
