#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int x;cin>>x;
        bool flag=false;
        for(int i=1;i<cbrt(x);i++)
        {
            int j=cbrt(x-pow(i,3));
            if((pow(j,3)+pow(i,3))==x&&j>0)
            {
                flag=true;   
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}