// Author: Aditya Agrawal //
#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#define debug(x)			 	\
    for(auto element:x)      	\
        cout<<element<<" ";  	\
        cout<<endl;
#define debugp(x)          	\
    for(auto element:x)    		\
        cout<<element.first<<" "<<element.second<<endl
#define db(x) cout<< #x<<"="<<x<<'\n'
#define makegraph(adj, num)   	\
for (int i=0;i<num;i++) 	\
{                             	\
    int x,y;                 	\
    cin>>x>>y;            		\
    adj[x].push_back(y);      	\
    adj[y].push_back(x);      	\
}
typedef long int li;
typedef long long int lli;
typedef unsigned long long int ull;
typedef long double ld;
#define intmax 2147483647
#define intmin -2147483648
#define pi 3.141592653589
#define mod 1000000007
#define mdl 998244353
#define fo return
#define br cout<<endl
#define nah cout<<"NO"<<endl
#define yeah cout<<"YES"<<endl
#define all(a) a.begin(),a.end()
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define gsort(x) sort(all(x),greater<lli>())
#define cntleadz(x) __builtin_clz(x)
#define cnttrailz(x) __builtin_ctz(x)
#define cntpop(x) __builtin_popcount(x)
#define binparity(x) __builtin_parity(x)
#define mp(a,b) make_pair(a,b)
#define pb(k) push_back(k)
#define map map<lli,lli>
#define vec vector<lli>
#define stk stack<lli>
#define endl '\n'
#define gcd __gcd

void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}

void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}

void solve(){

    lli n,m;
    cin>>n>>m;
    vec a(n),b(m);
    vec left(n,-1),right(n,intmax);
    in(a);
    in(b);
    map mp;
    f(i,0,n){
        if(a[i])mp[i]++;
    }
    f(i,1,n){
        if(a[i-1]==1)left[i]=max(i-1,left[i-1]);
        else left[i]=left[i-1];
    }
    fr(i,n-2,0){
        if(a[i+1]==2)right[i]=min(i+1,right[i+1]);
        else right[i]=right[i+1];
    }
    f(i,0,n)if(right[i]==intmax)right[i]=-1;
    // debug(left);
    // debug(right);
    f(i,0,m){

        if(b[i]>n)cout<<-1<<' ';
        else if(mp[b[i]-1]>0)cout<<0<<' ';
        else if(b[i]==1)cout<<0<<' ';
        else{

            if(a[0]==1){

                if(left[b[i]-1]!=-1 and right[b[i]-1]!=-1){

                    cout<<min(b[i]-1,min(b[i]-left[b[i]-1]-1,right[b[i]-1]-b[i]+1))<<' ';
                }
                else if(left[b[i]-1]!=-1 and right[b[i]-1]==-1){

                    cout<<min(b[i]-1,b[i]-left[b[i]-1]-1)<<' ';
                }
                else if(right[b[i]-1]!=-1 and left[b[i]-1]==-1){

                    cout<<min(b[i]-1,right[b[i]-1]-b[i]+1)<<' ';
                }
                else if(left[b[i]-1]==-1 and right[b[i]-1]==-1){

                    cout<<b[i]-1<<' ';
                }
            }
            else{

                if(left[b[i]-1]!=-1 and right[b[i]-1]!=-1){
                    cout<<min(b[i]-left[b[i]-1]-1,right[b[i]-1]-b[i]+1)<<' ';
                }
                else if(left[b[i]-1]!=-1 and right[b[i]-1]==-1){    
                    cout<<b[i]-left[b[i]-1]-1<<' ';
                }
                else if(left[b[i]-1]==-1 and right[b[i]-1]!=-1){
                    cout<<right[b[i]-1]-b[i]+1<<' ';
                }
                else cout<<-1<<' ';
            }
        }
    }
    br;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}