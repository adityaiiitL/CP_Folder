// Author: Aditya Agrawal o_O
#include<bits/stdc++.h>
using namespace std;

// #pragma GCC target ("avx2")
// #pragma GCC optimize ("O3")
// #pragma GCC optimize ("unroll-loops")

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

vec arr;
void build(){
    f(i,0,61){
        lli t=(1LL<<i);
        arr.pb(t-1LL);
    }
}
void solve()
{
    lli l,r;
    cin>>l>>r;
    lli ans=-1;
    f(i,0,arr.size()){
        if(arr[i]>=l and arr[i]<=r)ans=arr[i];
    }
    if(ans!=-1){
        cout<<ans<<endl;
        fo;
    }
    if(l==r){
        cout<<l<<endl;
        fo;
    }
    string a,b,c,c1;
    bool f=false;
    fr(i,60,0){
        if((l&(1LL<<i)))a.pb('1');
        else a.pb('0');
        if((r&(1LL<<i)))b.pb('1');
        else b.pb('0');
    }
    lli k=0;
    f(i,0,61){
        if(a[i]=='0' and b[i]=='1' and !f){
            f=true;
            k=i;
            c1.pb('0');
            continue;
        }
        if(f){
            c1.pb('1');
            continue;
        }
        if(a[i]==b[i]){
            c1.pb(a[i]);
            continue;
        }
    }
    ans=0;
    reverse(all(c1));
    f(i,0,c1.size()){
        if(c1[i]=='1')ans+=(1LL<<i);
    }
    lli check=ans+(1LL<<(60-k));
    if(check<=r)cout<<check<<endl;
    else cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    build();
    lli t;
    cin>>t;
    while(t--)solve();
    fo 0;
}