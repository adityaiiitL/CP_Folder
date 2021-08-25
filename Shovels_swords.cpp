#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        long int a,b;
        cin>>a>>b;
        if(a==0||b==0)cout<<0<<endl;
        else if(a==1&&b==1)cout<<0<<endl;
        else
        {
            if(a==b)cout<<(a+b)/3<<endl;
            else
            {
                if(2*min(a,b)<max(a,b))cout<<min(a,b)<<endl;
                else cout<<(a+b)/3<<endl;
            }
        }
    }
    return 0;
}