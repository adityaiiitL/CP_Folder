#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c,n;
        cin>>c>>n;
        int i=1;
        int sum=n*(n+1)/2;
        bool flag=true;
        if(sum>c)flag=false;
        while(sum<c)
        {
            sum+=n;
        }
        if(flag)cout<<c-sum+n<<endl;
        else cout<<c<<endl;
    }
    return 0;
}