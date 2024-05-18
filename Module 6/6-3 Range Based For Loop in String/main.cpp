#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;

    //for(int i=0;i<s.size();i++){  //access index and element
    //   cout<<s[i]<<endl;
    //}

    //Range base for loop in string
    for(char c:s){  //You can access only element
        cout<<c <<endl;
    }


    return 0;
}
