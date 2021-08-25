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
typedef vector<pair<lli,lli>> vp;
typedef map<string,lli> mi;
typedef map<char,lli> mc;
typedef vector<lli> vec;
typedef vector<string> vs;
typedef stack<lli> stk;
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
// #define map map<lli,lli>
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
bool comp(pair<string,lli>p1,pair<string,lli>p2){
    if(p1.second==p2.second)fo p1.first<p1.first;
    fo p1.second>p2.second;
}
void solve(){

    string name;
    cin>>name;
    lli n;
    cin>>n;
    map<string,lli>m;
    set<string>s;
    while(n--){

        string n1,action;
        cin>>n1>>action;
        if(action=="posted"){
            string s1,n2,s2;
            cin>>s1>>n2>>s2;
            n2.erase(n2.size()-2,2);
            if(n1==name or n2==name){
                if(n1!=name)m[n1]+=15;
                else m[n2]+=15;
            }
            else s.insert(n1),s.insert(n2);
        }
        else if(action=="commented"){
            string s1,n2,s2;
            cin>>s1>>n2>>s2;
            n2.erase(n2.size()-2,2);
            if(n1==name or n2==name){
                if(n1!=name)m[n1]+=10;
                else m[n2]+=10;
            }
            else s.insert(n1),s.insert(n2);
        }
        else if(action=="likes"){
            string n2,s2;
            cin>>n2>>s2;
            n2.erase(n2.size()-2,2);
            if(n1==name or n2==name){
                if(n1!=name)m[n1]+=5;
                else m[n2]+=5;
            }
            else s.insert(n1),s.insert(n2);
        }
    }
    // debugp(m);
    vector<pair<string,lli>>v;  
    for(auto i:m)v.pb(mp(i.first,i.second));
    sort(all(v),comp);
    mi check;
    for(auto i:v)cout<<i.first<<endl,check[i.first]++;
    for(auto i:s)if(check[i]==0)cout<<i<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    lli t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}