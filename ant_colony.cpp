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

typedef int lli;
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

vec v;
lli n;
pair<lli,pii>st[1000001];
class segTree
{
    public:
    void build(lli si,lli ss,lli se){
        if(ss==se){
            st[si]=mp(v[ss],mp(v[ss],1));
            fo;
        }
        lli mid=(ss+se)/2;
        build(2*si,ss,mid);
        build(2*si+1,mid+1,se);
        st[si].first=gcd(st[2*si].first,st[2*si+1].first);
        if(st[2*si].second.first==st[2*si+1].second.first){
            st[si].second.first=st[2*si].second.first;
            st[si].second.second=st[2*si].second.second+st[2*si+1].second.second;
        }
        else{
            st[si].second=min(st[2*si].second,st[2*si+1].second);
        }
    }
    pair<lli,pii> query(lli si,lli ss,lli se,lli qs,lli qe){
        if(qe<ss or qs>se)fo mp(0,mp(intmax,0));
        if(qs<=ss and se<=qe)fo st[si];
        lli mid=(ss+se)/2;
        pair<lli,pii>l=query(2*si,ss,mid,qs,qe);
        pair<lli,pii>r=query(2*si+1,mid+1,se,qs,qe);
        pair<lli,pii>c;
        c.first=gcd(l.first,r.first);
        if(l.second.first==r.second.first){
            c.second.first=l.second.first;
            c.second.second=l.second.second+r.second.second;
        }
        else{
            c.second=min(l.second,r.second);
        }
        fo c;
    }
};
void solve()
{
    segTree st;
    cin>>n;
    in1(v,n);
    st.build(1,0,n-1);
    lli q;
    cin>>q;
    f(i,0,q){
        lli l,r;
        cin>>l>>r;
        pair<lli,pii>p=st.query(1,0,n-1,l-1,r-1);
        if(p.first==p.second.first)cout<<(r-l+1)-p.second.second<<endl;
        else cout<<r-l+1<<endl;
    }
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