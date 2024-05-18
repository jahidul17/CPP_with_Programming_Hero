#include <bits/stdc++.h>

using namespace std;

void print(stringstream & ss){  //Use for reference stringstream &

    string word;
    if(ss>>word){
        cout<<word<<endl;
        print(ss);
        cout<<word<<" ";    //Print after fun with reverse
    }

}

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);  //Here print user define fun

    return 0;
}
