#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n%6==0&&(n/6)%2==1)cout<<n+1<<" "<<"WS"<<endl;
        if((n+1)%6==0&&((n+1)/6)%2==1)cout<<n+3<<" "<<"MS"<<endl;
        if((n+2)%6==0&&((n+2)/6)%2==1)cout<<n+5<<" "<<"AS"<<endl;
        if((n+3)%6==0&&((n+3)/6)%2==1)cout<<n+7<<" "<<"AS"<<endl;
        if((n+4)%6==0&&((n+4)/6)%2==1)cout<<n+9<<" "<<"MS"<<endl;
        if((n+5)%6==0&&((n+5)/6)%2==1)cout<<n+11<<" "<<"WS"<<endl;
        if((n-1)%6==0&&((n-1)/6)%2==1)cout<<n-1<<" "<<"WS"<<endl;
        if((n-2)%6==0&&((n-2)/6)%2==1)cout<<n-3<<" "<<"MS"<<endl;
        if((n-3)%6==0&&((n-3)/6)%2==1)cout<<n-5<<" "<<"AS"<<endl;
        if((n-4)%6==0&&((n-4)/6)%2==1)cout<<n-7<<" "<<"AS"<<endl;
        if((n-5)%6==0&&((n-5)/6)%2==1)cout<<n-9<<" "<<"MS"<<endl;
        if(n%6==0&&(n/6)%2==0)cout<<n-11<<" "<<"WS"<<endl;
    }
    return 0;
}