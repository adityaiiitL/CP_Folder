#include <bits/stdc++.h>
using namespace std;
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
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
void in(vec &v)
{
    f(i, 0, v.size()) cin >> v[i];
}
void out(vec v)
{
    f(i, 0, v.size()) cout << v[i] << ' ';
    cout << endl;
}
lli dis[1000001];
void solve()
{

    lli n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return;
    }
    queue<int> q;
    q.push(n);
    dis[n] = 1;
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        if (dis[now - 1] == 0)
        {
            dis[now - 1] = dis[now] + 1;
            if (now - 1 == 0)
                break;
            q.push(now - 1);
        }
        for (int i = 2; i * i <= now; i++)
        {
            if (now % i == 0)
            {
                int fac = max(i, now / i);
                if (dis[fac] == 0)
                {
                    dis[fac] = dis[now] + 1;
                    q.push(fac);
                }
            }
        }
    }
    cout << dis[0] - 1 << endl;
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
        memset(dis, 0, sizeof(dis));
    }
    return 0;
}