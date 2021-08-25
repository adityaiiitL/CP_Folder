// Author: Aditya Agrawal o_O
#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

/*
// Ordered-Set (PBDS)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define os_find(k) find_by_order(k)
#define os_order(k) order_of_key(k)
*/

// Debugger :/
#define debug(x)                \
    for (auto element : x)      \
        cout << element << " "; \
    cout << endl;
#define debugp(x)          \
    for (auto element : x) \
    cout << element.first << " " << element.second << endl
#define db(x) cout << #x << "=" << x << '\n'

typedef long long int lli;
typedef unsigned long long int ull;
typedef long double ld;
typedef vector<lli> vec;
typedef vector<pair<lli, lli>> vp;
typedef vector<string> vs;
typedef vector<char> vc;
typedef pair<lli, lli> pii;
typedef map<lli, lli> mi;
typedef map<char, lli> mc;
typedef map<string, lli> ms;

#define f(i, k, n) for (lli i = k; i < n; i++)
#define fr(i, k, n) for (lli i = k; i >= n; i--)
#define gsort(x) sort(all(x), greater<lli>())
#define cntpop(x) __builtin_popcount(x)
#define nah cout << "NO" << endl
#define yeah cout << "YES" << endl
#define all(a) a.begin(), a.end()
#define mp(a, b) make_pair(a, b)
#define pb(k) push_back(k)
#define br cout << endl
#define endl '\n'
#define gcd __gcd
#define fo return

const int intmax = 2147483647;
const int intmin = -2147483648;
const int mod = 1000000007; //998244353;
const int pi = 3.141592653589;

lli power(lli a, lli b)
{
    lli p = 1;
    while (b){
        if(b & 1 == 1)p *= a;
        a *= a;
        b = b >> 1;
    }
    return p;
}
lli lcm(lli a, lli b) { return (a * b) / gcd(a, b); }
void in(vec &v) { f(i, 0, v.size()) cin >> v[i]; }
void in1(vec &v, lli n){ f(i, 0, n) {lli h;cin >> h;v.pb(h);}}
void out(vec v){f(i, 0, v.size()) cout << v[i] << ' ';cout << endl;}

lli n,m1,m2;
lli rep1[1001],rep2[1001];
lli find1(lli a){
    if(rep1[a]==a)fo a;
    fo rep1[a]=find1(rep1[a]);
}
void Union1(lli a,lli b){
    a=find1(a),b=find1(b);
    if(a<b)swap(a,b);
        rep1[a]=rep1[b];
}
lli find2(lli a){
    if(rep2[a]==a)fo a;
    fo rep2[a]=find2(rep2[a]);
}
void Union2(lli a,lli b){
    a=find2(a),b=find2(b);
        if(a<b)swap(a,b);
        rep2[a]=rep2[b];
}
void solve(){   

    f(i,0,1001)rep1[i]=i,rep2[i]=i;
    cin>>n>>m1>>m2;
    f(i,0,m1){
        lli a,b;
        cin>>a>>b;
        Union1(a,b);
    }
    f(i,0,m2){
        lli a,b;
        cin>>a>>b;
        Union2(a,b);
    }
    vp ans;
    f(i,1,n){
        f(j,i+1,n+1){
            if(i==j)continue;
            if(find1(i)!=find1(j) and find2(i)!=find2(j)){
                ans.pb(mp(i,j));
                Union1(i,j);
                Union2(i,j);
            }
        }
    }
    cout<<ans.size()<<endl;
    debugp(ans);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    lli t=1;
    // cin>>t;
    while(t--)solve();
    fo 0;
}