#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int a;
        cin>>a;
        int n=0;
        while(a>1)
        {
            a=a/2;
            if(a%2!=0)
            {
                cout<<"-1"<<endl;
                break;
            }
            n++;
        }
       cout<<n<<endl;
    }
    return 0;
}