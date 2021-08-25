#include<bits/stdc++.h>
using namespace std;
#define intmax 2147483647
#define intmin -2147483648
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define ld long double
#define lli long long int
#define all(a) a.begin(),a.end()
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define mp(a,b) make_pair(a,b)
#define pb(k) push_back(k)
#define map map<lli,lli>
#define vec vector<lli>
#define stk stack<lli>
#define endl '\n'

void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}

void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}

vector<lli>adj[5005];
bool vis[5005];
void dfs(lli v){

    vis[v]=true;
    for(auto i:adj[v]){

        if(!vis[i]){

            cout<<v<<" "<<i<<endl;
            dfs(i);
        }
    }
}
void solve(){

    lli n;
    cin>>n;
    memset(adj,0,sizeof(adj));
    memset(vis,0,sizeof(vis));
    vec v(n);
    in(v);
    bool flag=true;
    f(i,0,n-1){

        if(v[i]!=v[i+1]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
        return;
    }
    vector<pair<lli,lli>>ans;
    lli vi;
    f(i,1,n){

        if(v[i]!=v[0]){
            ans.pb(mp(1,i+1));
            vi=i;
            // v[i]=-1;
        }
    }
    // v[0]=-1;
    // out(v);
    f(i,1,n){

        // if(i==1)continue;
        if(v[i]==v[0]){

            ans.pb(mp(vi+1,i+1));
        }
    }
    cout<<"YES"<<endl;
    for(auto i:ans){

        cout<<i.first<<" "<<i.second<<endl;
    }

    // lli k=0;
    // f(i,0,n){

    //     f(j,0,n){

    //         if(v[i]!=v[j]){

    //             adj[i+1].pb(j+1);
    //             adj[j+1].pb(i+1);
    //         }
    //     }
    // }
    // cout<<"YES"<<endl;
    // dfs(1);
    // f(i,0,n-1){

    //     f(j,i+1,n){

    //         if(v[i]!=v[j]){
    //             ans.pb(mp(i+1,j+1));
    //         }
    //     }
    // }
    // cout<<"YES"<<endl;
    // lli k=1;
    // cout<<ans[0].first<<" "<<ans[0].second<<endl;
    // f(i,1,ans.size()){
        
    //     if(k==n-1)break;
    //     if(ans[i-1].first!=ans[i].first){
    //         cout<<ans[i].first<<" "<<ans[i].second<<endl;
    //         ans[i].first=-1;
    //         k++;
    //     }
    // }
    // f(i,1,ans.size()){

    //     if(k==n-1)break;
    //     if(ans[i].first>0){

    //         cout<<ans[i].first<<" "<<ans[i].second<<endl;
    //         k++;
    //     }
    // }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}