// Author: Aditya Agrawal //
#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define debug(x)                \
    for (auto element : x)      \
        cout << element << " "; \
    cout << endl;

#define debugp(x)          \
    for (auto element : x) \
    cout << element.first << " " << element.second << endl
#define db(x) cout << #x << "=" << x << '\n'
#define makegraph(adj, num)       \
    for (int i = 0; i < num; i++) \
    {                             \
        int x, y;                 \
        cin >> x >> y;            \
        adj[x].push_back(y);      \
        adj[y].push_back(x);      \
    }
typedef long long int lli;
typedef unsigned long long int ull;
typedef long double ld;
#define intmax 2147483647
#define intmin -2147483648
#define pi 3.141592653589
#define mod 1000000007
#define mdl 998244353
#define fo return
#define all(a) a.begin(), a.end()
#define f(i, k, n) for (lli i = k; i < n; i++)
#define fr(i, k, n) for (lli i = k; i >= n; i--)
#define cntleadz(x) __builtin_clz(x)
#define cnttrailz(x) __builtin_ctz(x)
#define cntpop(x) __builtin_popcount(x)
#define binparity(x) __builtin_parity(x)
#define mp(a, b) make_pair(a, b)
#define pb(k) push_back(k)
#define map map<lli, lli>
#define vec vector<lli>
#define stk stack<lli>
#define endl '\n'

void in(vec &v)
{
    f(i, 0, v.size()) cin >> v[i];
}

void out(vec v)
{
    f(i, 0, v.size()) cout << v[i] << ' ';
    cout << endl;
}
lli arr[26];
string x, y;
lli n, m;
lli dp[2001][2001];
lli lcs(lli a, lli b)
{

    if (a == 0 or b == 0)
        return 0;
    if (dp[a][b] != -1)
        return dp[a][b];
    if (x[a - 1] == y[b - 1])
    {
        lli temp1 = lcs(a - 1, b - 1);
        lli temp2 = arr[x[a - 1] - 'a'] + lcs(a - 1, b - 1);
        return dp[a][b] = max(temp1, temp2);
    }
    else
    {
        return dp[a][b] = max(lcs(a, b - 1), lcs(a - 1, b));
    }
}
void solve()
{

    cin >> n >> m;
    f(i, 0, 26) cin >> arr[i];
    cin >> x >> y;
    memset(dp, -1, sizeof(dp));
    cout << lcs(n, m);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    fo 0;
}