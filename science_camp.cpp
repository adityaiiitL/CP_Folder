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
    sort(v.begin(),v.end());
    vector<lli>v1;
    lli count=0;
    v1.push_back(v[0]);
    count++;
    for(lli i=n-1;i>=1;i--){

        bool flag=true;
        for(lli j=0;j<v1.size();j++){

            if(abs(v1[j]-v[i])<=k){
                flag=false;
                count++;
                v1.clear();
                v1.push_back(v[i]);
                break;
            }
        }
        if(flag)v1.push_back(v[i]);
    }
    cout<<count<<endl;
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