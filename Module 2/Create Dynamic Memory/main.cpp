#include <iostream>

using namespace std;


int * fun(){    //** use for pointer of pointer

    int *a=new int;
    *a=100;

    cout<<"fun = "<<a<<endl;

    //int *d=a;

    return a;   //&d use for pointer address.

    //When return pointer/ static address remove.
    //But Dynamic/ Heap address will be not remove.

}



int main()
{

    int *p =fun();  //** use for pointer of pointer

    cout<<"Main = "<<p<<endl;


    /*

    //Hear *a contain pointer address and that is static address.
    //And new int contain dynamic/Heap memory address.
    int *a = new int;

    *a=10;
    cout<< a<<endl;

    float *b =new float;
    *b =234.6904;
    //*b assign value and b assign address
    cout<<b<<endl;

    */

    return 0;
}
