#include<bits/stdc++.h>
using namespace std;
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~Author: Aditya_Agrawal_2002~~//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define intmax 2147483647
#define intmin -2147483648
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define ld long double
#define lli long long int
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
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

// Sieve Array
lli spf[100001];
void sieve(){
    f(i,0,100001)spf[i]=i;
    f(i,2,100001){

        if(spf[i]==i){

            for(lli j=i*i;j<100001;j+=i){

                if(spf[j]==j)spf[j]=i;
            }
        }
    }
}

// Binary Exponentiation (Recursive method)
lli pow_rec(lli a,lli b){

    if(b==0)return 1;
    if(b%2==1){
        return a*pow_rec(a,b-1);
    }
    else{
        return pow_rec(a,b/2)*pow_rec(a,b/2);
    }
}
// Binary Exponentiation (Iterative Method)
lli pow_itr(lli a,lli b){

    lli p=1;
    while(b){

        if(b&1==1){
            p*=a;
        }
        a*=a;
        b=b>>1;
    }
    return p;
}
vector<lli>adj[300005];
bool vis[300005];
void bfs(lli v){

    queue<lli>q;
    q.push(v);
    vis[v]=true;
    while(q.size()!=0){

        lli temp=q.front();
        q.pop();
        for(auto i:adj[temp]){

            if(!vis[i]){

                q.push(i);
                vis[i]=true;
            }
        }
    }
}
void dfs(lli v){

    vis[v]=true;
    for(auto i:adj[v]){

        if(!vis[i]){

            dfs(i);
        }
    }
}
void solve(){

    stack<pair<int,int> > ele, maxi;
    int n, i = 1;
    cin>>n;
    while(i <= n)
    {
        int t, v;
        pair<int, int> p1, p2;
        cin>>t;
        if(t == 1)
        {
            cin>>v;
            ele.push(make_pair(v, i));
            if(maxi.size() == 0)
            {
                maxi.push(make_pair(v, i));
            }
            else
            {
                p1 = maxi.top();
                if(p1.first < v)
                {
                    maxi.push(make_pair(v, i));
                }
            }
        }
        else if(t == 2)
        {
            p1 = ele.top();
            ele.pop();
            p2 = maxi.top();
            if(p1.first == p2.first && p1.second == p2.second)
            {
                maxi.pop();
            }
        }
        else
        {
            p1 = maxi.top();
            cout<<p1.first<<endl;
        }
        i++;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}