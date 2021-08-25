#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    test:
    while(t--)
    {
        long long int n,i;
        cin>>n;
        for(i=3;i<=sqrt(n);i+=2)
        {
            if(n%i==0)
            {
                cout<<"YES"<<endl;
                goto test;
            }
        }
        if(n%2==1)
        {
            cout<<"YES"<<endl;
            goto test;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}