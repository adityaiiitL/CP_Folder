#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    1<=t<=10;
    cin>>t;
    while(t-->0)
    {
        int a;
        1<=a<=pow(a,18);
        cin>>a;
        int n=0;
        while(a=1)
        {
           if(a%2==0)
           { int b=a/2;
            if(b%2==0)
            {
                n++;
            }
            else
            {
                cout<<"-1"<<endl;
                break;
            }
           }
           else
           {
               cout<<"-1"<<endl;
               break;
           }
            

        }
        cout<<n<<endl;
    }
    return 0;
}