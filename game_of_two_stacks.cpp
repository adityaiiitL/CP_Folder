#include <bits/stdc++.h>
using namespace std;
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~Author: Aditya_Agrawal_2002~~//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#define intmax 2147483647
#define intmin -2147483648
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define ld long double
#define lli long long int
#define f(i, k, n) for (lli i = k; i < n; i++)
#define fr(i, k, n) for (lli i = k; i >= n; i--)
#define pb(k) push_back(k)
#define map map<lli, lli>
#define vec vector<lli>
#define stk stack<lli>
#define endl '\n'

string s, t;
lli a[100500], b[100500], pa[100500], pbb[100500];

void solve()
{

    lli n, m, x, i;
    cin >> n >> m >> x;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        pa[i + 1] = pa[i] + a[i];
    }
    for (i = 0; i < m; i++)
    {
        cin >> b[i];
        pbb[i + 1] = pbb[i] + b[i];
    }
    lli ans = 0;
    for (i = 0; i <= n; i++)
    {
        if (pa[i] <= x)
            ans = max(ans, i + (lli)(upper_bound(pbb, pbb + m + 1, x - pa[i]) - pbb - 1));
        else break;
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}