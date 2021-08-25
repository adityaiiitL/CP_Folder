#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    1<=t<=100;
    cin>>t;
    while(t-->0)
    {
        long long int a;
        1<=a<=pow(10,18);
        cin>>a;
        if(a%2==0)
        {
            long long int n=0;
            while(a>=1)
            {
                a=a/2;
                n++;
            }
            cout<<n<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        
    }
    return 0;
}