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
    
    lli n,k;
    cin>>n>>k;
    vector<lli>v(n);
    for(lli i=0;i<n;i++)cin>>v[i];
    lli mn=1000000,temp,count=0;
    bool flag=false;
    for(lli i=0;i<n-1;i++){

        temp=v[i];
        count=1;
        for(lli j=i+1;j<n;j++){

            temp=temp|v[j];
            count++;
            if(temp>=k){
                mn=min(mn,count);
                flag=true;
                break;
            }
        }
    }
    if(flag)cout<<mn<<endl;
    else cout<<-1<<endl;
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