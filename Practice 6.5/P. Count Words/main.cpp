#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt=0;
    bool in_word=false;
    string s;

    getline(cin,s);

    for(char c:s)
    {

        if(isalpha(c)>0)
        {
            if(in_word==false)
            {
                cnt++;
                in_word=true;
            }
            //in_word=true;

        }
        else
        {
            in_word=false;
        }

    }

    cout<<cnt;


    return 0;
}
