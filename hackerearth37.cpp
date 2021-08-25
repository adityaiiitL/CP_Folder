#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
       int a,b,c;
       cin>>a>>b>>c;
       int k=abs(2*b-a-c);
       if(k%2==0)cout<<k/2<<endl;
       else cout<<(k+1)/2<<endl;
    }
    return 0;
}