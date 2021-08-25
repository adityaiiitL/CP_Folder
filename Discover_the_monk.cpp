#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,q;cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    while(q--)
    {
        int x;cin>>x;
        if(binary_search(a,a+n,x))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    /*int a[3]={'1','2','3'};
    if(binary_search(a,a+3,2))cout<<"YES\n";
    else cout<<"NO\n";
    return 0;*/
}