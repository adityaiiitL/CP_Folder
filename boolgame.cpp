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

    li n,m,k;
        cin>>n>>m>>k;
        vector<li>g(n+1);
        for(li i=0;i<n;i++)cin>>g[i+1];
        vector<vector<pair<li,li>>>arr(n+1),dp(n+1);
        for(li i=0;i<m;i++){

            li u,v,d;
            cin>>u>>v>>d;
            arr[u].push_back(make_pair(i,d));
            arr[v].push_back(make_pair(i,d));
        }
        dp[0].push_back(make_pair(0,0));
        for(li i=1;i<=n;i++){

            vector<pair<li,li>>temp;
            temp.insert(temp.end(),dp[i-1].begin(),dp[i-1].end());
            li curr=0,mask=0;
            set<li>open;
            for(li j=i;j>=i;j--){

                curr+=g[j];
                mask^=1LL<<j;
                for(auto xyz:arr[j]){

                    if(open.count(xyz.first))curr+=xyz.second;
                    else open.insert(xyz.first);
                }
                if(j>1){

                    for(auto xyzj:dp[j-2]){

                        temp.push_back(make_pair(xyzj.first+curr,mask^xyzj.second));
                    }
                }
                else{
                    temp.push_back(make_pair(curr,mask));
                }
                sort(temp.begin(),temp.end());
                reverse(temp.begin(),temp.end());
                set<li>sel;
                li filled=0;
                for(li j=0;j<temp.size()&&filled<k;j++){

                    if(sel.count(temp[j].second))continue;
                    dp[i].push_back(temp[j]);
                    filled++;
                    sel.insert(temp[j].second);
                }
            }
            for(li i=0;i<k;i++)cout<<dp[n][i].first<<" ";
            cout<<endl;
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