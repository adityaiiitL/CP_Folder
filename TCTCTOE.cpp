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
#define stk stack<lli> flag = true
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

// Sieve Array
lli spf[100001];
void sieve()
{
    f(i, 0, 100001) spf[i] = i;
    f(i, 2, 100001)
    {
        if (spf[i] == i)
        {
            for (lli j = i * i; j < 100001; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

// Binary Exponentiation (Recursive method)
lli pow_rec(lli a, lli b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 1)
    {
        return a * pow_rec(a, b - 1);
    }
    else
    {
        return pow_rec(a, b / 2) * pow_rec(a, b / 2);
    }
}
// Binary Exponentiation (Iterative Method)
lli pow_itr(lli a, lli b)
{
    lli p = 1;
    while (b)
    {
        if (b & 1 == 1)
        {
            p *= a;
        }
        a *= a;
        b = b >> 1;
    }
    return p;
}
void solve()
{

    char a[3][3];
    lli n_X = 0, n_O = 0, n__ = 0;
    f(i, 0, 3)
    {
        f(j, 0, 3)
        {

            cin >> a[i][j];
            if (a[i][j] == 'X')
                n_X++;
            if (a[i][j] == 'O')
                n_O++;
            if (a[i][j] == '_')
                n__++;
        }
    }
    if ((n_X - n_O) > 1 || n_O > n_X)
    {
        cout << 3 << endl;
        return;
    }
    lli check = 0;
    bool flag = false;
    lli checkx = 0, checky = 0;
    if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
    {
        flag = true;
        check++;
        checkx++;
    }
    if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
    {
        flag = true;
        check++;
        checky++;
    }
    if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X')
    {
        flag = true;
        check++;
        checkx++;
    }
    if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O')
    {
        flag = true;
        check++;
        checky++;
    }
    if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')
    {
        flag = true;
        check++;
        checkx++;
    }
    if (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O')
    {
        flag = true;
        check++;
        checky++;
    }
    if (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')
    {
        flag = true;
        check++;
        checkx++;
    }
    if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')
    {
        flag = true;
        check++;
        checky++;
    }
    if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')
    {
        flag = true;
        check++;
        checkx++;
    }
    if (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O')
    {
        flag = true;
        check++;
        checky++;
    }
    if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')
    {
        flag = true;
        check++;
        checkx++;
    }
    if (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O')
    {
        flag = true;
        check++;
        checky++;
    }
    if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X')
    {
        flag = true;
        check++;
        checkx++;
    }
    if (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O')
    {
        flag = true;
        check++;
        checky++;
    }
    if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X')
    {
        flag = true;
        check++;
        checkx++;
    }
    if (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O')
    {
        flag = true;
        check++;
        checky++;
    }
    if (n__ == 0 && check == 0)
    {
        cout << 1 << endl;
        return;
    }
    if (check > 1)
    {

        if ((checkx == 2 && (n_X - n_O) == 1) || (checky == 2 && (n_O - n_X) == 1))
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 3 << endl;
            return;
        }
    }
    // OOX
    // XX_
    // OOX
    if (flag && check == 1)
    {

        if (checkx == 1)
        {

            if (n_X > n_O)
                cout << 1 << endl;
            else
                cout << 3 << endl;
        }
        if (checky == 1)
        {

            if (n_O == n_X)
                cout << 1 << endl;
            else
                cout << 3 << endl;
        }
        return;
    }
    if (n__ > 0 && check == 0)
    {
        cout << 2 << endl;
    }
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