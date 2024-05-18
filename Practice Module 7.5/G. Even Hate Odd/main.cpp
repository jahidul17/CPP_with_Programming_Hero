#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test>0)
    {

        int n;
        cin>>n;

        int a[n];
        //Array input
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        //Process
        if(n%2==0)
        {
            int equal_digit=n/2;

            int even=0,odd=0;
            //count even and odd
            for(int i=0; i<n; i++)
            {
                if(a[i]%2==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }


            int need_digit=even-odd;
            need_digit=abs(need_digit);

            if(even==odd)
            {
                cout<<"0"<<endl;
            }
            else if(even<odd)
            {
                int incri_even=0;
                for(int i=0; i<n; i++)
                {
                    if(a[i]%2!=0)
                    {
                        a[i]+1;
                        even++;
                        incri_even++;
                        if(even==equal_digit)
                        {
                            break;
                        }
                    }
                }

                cout<<need_digit-incri_even<<endl;

            }
            else{
                int incri_odd=0;
                for(int i=0; i<n; i++)
                {
                    if(a[i]%2==0)
                    {
                        a[i]-1;
                        odd++;
                        incri_odd++;
                        if(odd==equal_digit)
                        {
                            break;
                        }
                    }
                }

                cout<<need_digit-incri_odd<<endl;
            }

        }
        else
        {
            cout<<"-1"<<endl;
        }


        test--;
    }


    return 0;
}
