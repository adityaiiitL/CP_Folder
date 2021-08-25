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

void solve()
{

    lli q, n, v;
    vector<lli> primes;
    primes.push_back(2);
    primes.push_back(3);
    for (lli i = 5; i <= 10000; i++)
    {
        lli no = 0;
        for (lli j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
                no = 1;
        }
        if (!no)
            primes.push_back(i);
    }
    cin >> n >> q;
    stack<lli> s1, s2, s3;
    for (lli i = 0; i < n; i++)
    {
        cin >> v;
        s1.push(v);
    }
    for (lli i = 0; i < q; i++)
    {
        if (s1.empty())
            break;
        lli cur = primes[i];
        while (!s1.empty())
        {
            lli ele = s1.top();
            s1.pop();
            if (ele % cur == 0)
            {
                s2.push(ele);
            }
            else
            {
                s3.push(ele);
            }
        }
        while (!s2.empty())
        {
            cout << s2.top() << endl;
            s2.pop();
        }
        s1 = s3;
        while (!s3.empty())
            s3.pop();
    }
    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}