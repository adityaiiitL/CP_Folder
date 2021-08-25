#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
void solve(){

    ld n,k;
    cin>>n>>k;
    if(n==1&&k==1){
        cout<<-1<<endl;
        return;
    }
    if(n==2&&k==1){
        cout<<-1<<endl;
        return;
    }
    li temp=ceil((n-2)/2);
    // cout<<temp<<endl;
    if(temp<k){
        cout<<-1<<endl;
        return;
    }
    if(k==0){

        for(li i=1;i<=n;i++)cout<<i<<" ";
        cout<<endl;
        return;
    }
    li count=0;
    vector<li>v(n);
    for(li i=0;i<n;i++)v[i]=i+1;
    for(li i=n-2;i>=0;i--){

        li temp=v[i];
        v[i]=v[i+1];
        v[i+1]=temp;
        count++;
        if(count==k)break;
        i--;
    }
    for(li i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}