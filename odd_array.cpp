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

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
#define rnd(x, y) uniform_int_distribution<long long int>(x, y)(rng)
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

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

lli n;
vector<vec>arr;
void func(lli i,vec v){
    // out(v);
    if(i==n){
        arr.pb(v);
        fo;
    }
    f(j,1,5){
        v.pb(j);
        func(i+1,v);
        v.pop_back();
    }
}
void solve()
{
    // arr.clear();
    // cin>>n;
    // vec v;
    // func(0,v);
    // for(auto i:arr){
    //     // out(i);
    //     bool f=true;
    //     map<vec,lli>m;
    //     f(j,1,n+1){
    //         vec a;
    //         f(k,0,n){
    //             a.pb(i[k]);
    //             if(a.size()==j){
    //                 m[a]++;
    //                 a.erase(a.begin());
    //             }
    //         }
    //     }
    //     for(auto j:m){
    //         mi mp;
    //         for(auto k:j.first){
    //             mp[k]++;
    //         }
    //         bool valid=false;
    //         for(auto k:mp){
    //             if(k.second&1){
    //                 valid=true;
    //             }
    //         }
    //         if(!valid)f=false;
    //     }
    //     if(f){
    //         out(i);
    //         fo;
    //     }
    //     // db(f);
    // }
    lli n;
    cin>>n;
    vec a(n+1,1);
    for(lli i=1;i<32;i++){
        lli jump=(1LL<<i);
        for(lli j=jump/2;j<=n;j+=jump){
            a[j]=i;
        }
    }
    f(i,1,n+1)cout<<a[i]<<' ';
    br;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    lli t;
    cin>>t;
    while(t--)solve();
    fo 0;
}