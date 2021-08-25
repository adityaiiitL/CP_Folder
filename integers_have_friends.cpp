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
typedef int lli;
typedef unsigned long long int ull;
typedef long double ld;
typedef vector<pair<lli,lli>> vp;
typedef pair<lli,lli> pii;
typedef map<lli,lli> mi;
typedef map<char,lli> mc;
typedef map<string,lli> ms;
typedef vector<lli> vec;
typedef vector<string> vs;
typedef vector<char> vc;
typedef set<lli> si;
typedef set<char> sc;
typedef set<string> ss;
typedef stack<lli> stk;

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
#define endl '\n'
#define gcd __gcd
#define segtree
#ifdef segtree
    #define mid (st + en) / 2
    #define lidx 2 * ind + 1
    #define ridx 2 * ind + 2
    #define left st, mid, lidx, seg
    #define right mid + 1, en, ridx, seg
#endif

const int intmax=2147483647;
const int intmin=-2147483648;
const int mod=1000000007;
const int mod2=998244353;
const int pi=3.141592653589;

lli pow_itr(lli a,lli b){
    lli p=1;
    while(b){
        if(b&1==1)p*=a;
        a*=a;
        b=b>>1;
    }
    return p;
}
lli lcm(lli a,lli b) {return (a*b)/gcd(a,b);}
void in(vec &v){f(i,0,v.size())cin>>v[i];}
void in1(vec &v,lli n){f(i,0,n){lli h;cin>>h;v.pb(h);}}
void out(vec v){f(i,0,v.size())cout<<v[i]<<' ';cout<<endl;}

void maketree(int *arr, int st, int en, int ind , int *seg)
{
    if(st==en) seg[ind] = arr[st];
    else{
        maketree(arr,left);
        maketree(arr,right);
        seg[ind] = __gcd(seg[lidx],seg[ridx]);
    }
}
 
int getans(int l, int r, int st, int en, int ind, int *seg)
{
    if(l > r) return 1;
    if(r < st or l > en) return 0;
    else if(r >= en and l <= st) return seg[ind];
    else{
        if(st==en) return seg[ind];
        auto a = getans(l,r,left);
        auto b = getans(l,r,right);
        auto c = __gcd(a,b);
        return c;
    }
}
 
 
void solve()
{
    int n;
    cin >> n;
    vec v(n);
    f(i,0,n){
        cin >> v[i];
    }
    if(n == 1) {
        cout<<1<<endl;
        fo;
    }
    int seg[4*n];
    int diff[n-1];
    f(i,0,n-1) diff[i] = v[i+1]-v[i];
    int mx = 1;
    maketree(diff,0,n-2,0,seg);
    f(i,0,n){
        int low = 1, high = n-1-i,midd;
        // debug(i);
        while(high > low){
            midd = low + (high-low)/2;
            if(abs(getans(i,i+midd-1,0,n-2,0,seg)) == 1){
                high = midd;
            }
            else low = midd+1;
        }
        while(low < n-i and abs(getans(i,i+low-1,0,n-2,0,seg)) > 1) low++;
        mx = max(mx,low);
    }
    cout << mx << endl;
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