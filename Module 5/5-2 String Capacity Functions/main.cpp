#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s="Zahidul";

    //cout<<s.size()<<endl;
    //cout<<s.max_size()<<endl;
    //cout<<s.capacity()<<endl;


    //cout<<s<<endl;
    //s.clear();
    //cout<<s<<endl;



    /*
    //Basically empty function check size() is 0?
    if(s.empty()==true){
        cout<<"Empty";
    }
    else{
        cout<<"No empty";
    }
    */

    //cout<<s.size()<<endl;
    s.resize(3);

    //s.resize(10);//Override and print null value for 3-10;

    s.resize(10,'X');//Override and print x value for 3-10;


    cout<<s<<endl;


    return 0;
}
