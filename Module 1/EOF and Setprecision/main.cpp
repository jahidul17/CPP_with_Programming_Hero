#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{

    int a,b;

    //EOF use only for c language
    //while(scanf("%d %d",&a,&b) != EOF){
       // printf("%d %d\n",a,b);
   //}


   //EOF syntax in c++
   //while(cin>>a>>b){

    //    cout << a <<" "<< b << endl;

   //}


   double num;
   cin>>num;

   //#include <iomanip>
   cout<<fixed<<setprecision (3)<<num<<endl;


    return 0;
}
