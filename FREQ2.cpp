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

const int BLK=400;
lli a[100000],ans[100000];
lli freq[100001];
lli freqOfFreq[300001];

struct query
{
    lli l,r,i;
};
query Q[100001];
bool op(query q1,query q2){
    if(q1.l/BLK!=q2.l/BLK){
        fo q1.l/BLK<q2.l/BLK;
    }
    fo q1.r<q2.r;
}
lli cnt=0;
void add(lli n){
    lli pre=freq[a[n]];
    freq[a[n]]++;
    lli cur=freq[a[n]];
    freqOfFreq[pre]--;
    freqOfFreq[cur]++;
    cnt=max(cnt,cur);
}
void rem(lli n){
    lli pre=freq[a[n]];
    freq[a[n]]--;
    lli cur=freq[a[n]];
    freqOfFreq[pre]--;
    freqOfFreq[cur]++;
    if(cur<cnt){
        while(freqOfFreq[cnt]==0){
            cnt--;
        }
    }
}
void solve()
{
    lli n,q;
    cin>>n>>q;
    f(i,0,n)cin>>a[i];
    f(i,0,q){
        cin>>Q[i].l>>Q[i].r;
        Q[i].i=i;
    }
    sort(Q,Q+q,op);
    lli pl=0,pr=-1;
    f(i,0,q){
        lli l=Q[i].l,r=Q[i].r;
        while(l<pl){
            pl--;
            add(pl);
        }
        while(r>pr){
            pr++;
            add(pr);
        }
        while(l>pl){
            rem(pl);
            pl++;
        }
        while(r<pr){
            rem(pr);
            pr--;
        }
        ans[Q[i].i]=cnt;
    }
    f(i,0,q)cout<<ans[i]<<endl;
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