// Author: Aditya Agrawal o_O
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<lli> vec;
typedef map<lli, lli> mi;
#define f(i, k, n) for (lli i = k; i < n; i++)
void in(vec &v) { f(i, 0, v.size()) cin >> v[i]; }

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    lli t;
    cin >> t;
    lli n, m, Q;
    while (t--)
    {
        cin >> n >> m >> Q;
        set<lli> s;
        mi mp;
        bool f = true;
        while (Q--)
        {
            char c;
            lli num;
            cin >> c >> num;
            if (c == '+')
            {
                if (mp[num] > 0)
                {
                    f = false;
                }
                s.insert(num);
                mp[num]++;
                if (s.size() > m)
                {
                    f = false;
                }
            }
            else
            {
                if (s.count(num))
                {
                    s.erase(num);
                }
                else
                {
                    f = false;
                }
            }
        }
        if (f)
            cout << "Consistent" << endl;
        else
            cout << "Inconsistent" << endl;
    }
    return 0;
}