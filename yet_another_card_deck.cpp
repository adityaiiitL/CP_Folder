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

    li n,q;
    cin>>n>>q;
    vector<li>v(n);
    for(li i=0;i<n;i++)cin>>v[i];
    vector<li>ans;
    reverse(v.begin(),v.end());
    while(q--){

        li h;
        cin>>h;
        li i;
        for(i=n-1;i>=0;i--){

            if(v[i]==h){
                ans.push_back(n-i);
                break;
            }
        }
        li temp=v[i];
        auto it=v.begin()+i;
        v.erase(it);
        v.push_back(temp);
    }
    for(li i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}