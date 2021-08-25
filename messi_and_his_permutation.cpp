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
lli func(vector<lli>v){

    lli mn=v[0];
    lli sum=v[0];
    for(lli i=1;i<v.size();i++){

        mn=min(mn,v[i]);
        sum+=mn;
    }
    return sum;
}
void print(vector<lli>&v){
    for(lli i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
}
void solve(){
    
    lli n,y;
    cin>>n>>y;
    if(y<n||y>n*(n+1)/2){
        cout<<-1<<endl;
        return;
    }
    vector<lli>v(n);
    for(lli i=0;i<n;i++){
        v[i]=n-i;
    }
    while(prev_permutation(v.begin(),v.end())){

        if(func(v)==y){
            print(v);
            break;
        }
    }
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