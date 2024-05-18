#include <bits/stdc++.h>

using namespace std;

namespace rakib{
        int age=30;
        void hello(){
            cout<<"Rakib namespace"<<endl;
        }

}

namespace sakib{
        int age2=40;
        void hello2(){
            cout<<"Sakib namespace"<<endl;
        }

}

using namespace rakib;
using namespace sakib;

int main()
{
    //cout<<rakib::age<<endl;
    //cout<<sakib::age2<<endl;

    //sakib and rakib variable can not same with on call
    cout<<age<<endl;
    cout<<age2<<endl;
    hello2();
    return 0;
}
