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

    li n;
    cin>>n;
    string name[n];
    map<string,li>m;
    for(li i=0;i<n;i++){

        string s;
        cin>>s;
        if(m[s]==0){
            m[s]++;
            name[i]=s;
        }
    }
    n=sizeof(name)/sizeof(name[0]);
    sort(name,name+n);
    for(li i=0;i<n;i++)cout<<name[i]<<endl;
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