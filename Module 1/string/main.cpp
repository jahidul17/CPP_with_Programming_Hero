#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{

    int n,a,b;
    char s[100];

    cin>>n;
    cin>>a;
    getchar();//This fun use for
    //get enter or space otherwise can't access getline fun.

    //#include <string>
    cin.getline(s,100);


    cout<<n<<" "<<a<<endl;
    cout<<s;

    //cin>>s;
    //cout<<s<<endl;

    //#include <string.h>
    //cout<<strlen(s)<<endl;


    return 0;
}
