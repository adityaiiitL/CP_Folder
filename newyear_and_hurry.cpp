#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    int t=0,i;
    for(i=1;i<=n;i++)
    {
        t+=5*i;
        if(t>240-k)break;
    }
    cout<<i-1<<endl;
    return 0;
}