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
#define all(a) a.begin(),a.end()
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
// 3 4 2 1 5
// 3 1 2 4 5 c1=1
// 1 2 3 4 5 c1=2

// 3 4 2 1 5
// 1 2 3 4 5 c2=1;
// ans = min(c1,c2)=1;

// 5 4 3 2 1
// 5 1 2 3 4 c1=1
// 1 5 2 3 4 c1=2
// 1 2 3 4 5 c1=3

void solve(){

    lli n;
    cin>>n;
    vec v(n),v1(n);
    in(v);
    f(i,0,n)v1[i]=v[i];
    bool f1=true;
    lli mx=intmin,mn=intmax;
    lli c1=0,c2=0;
    f(i,0,n){
        mx=max(mx,v[i]);
        mn=min(mn,v[i]);
    }
    f(i,0,n-1){

        if(v[i]>v[i+1]){

            f1=false;
            break;
        }
    }
    if(f1){
        cout<<0<<endl;
        return;
    }
    lli ans;
    sort(v.begin()+1,v.end());
    c1++;
    if(v[0]>v[1]){

        if(v[0]!=mx)c1++;
        else c1+=2;
    }   
    sort(v1.begin(),v1.begin()+n-1);
    c2++;
    // ans=min(ans,1);
    if(v1[n-2]>v1[n-1]){
        
        if(v1[n-1]!=mn){
            c2++;
        }
        else{
            c2+=2;
        }
    }
    ans=min(c1,c2);
    cout<<ans<<endl;

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