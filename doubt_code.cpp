#include <bits/stdc++.h>
using namespace std;

//OPTIMIZATION
#pragma GCC optimize("O2")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")

#define rep0(i, k, n) for (int i = k; i < n; i++)
#define rep1(i, k, n) for (int i = k; i <= n; i++)
#define rep2(i, k, n) for (int i = k; i < n; i += 2)

#define in1(t) \
    llint t;   \
    cin >> t;
#define in2(p, q) \
    llint p, q;   \
    cin >> p >> q
#define in3(p, q, r) \
    llint p, q, r;   \
    cin >> p >> q >> r
#define in4(p, q, r, s) \
    llint a, b, c, d;   \
    cin >> p >> q >> r >> s
#define in5(p, q, r, s, t) \
    llint a, b, c, d, e;   \
    cin >> p >> q >> r >> s >> t
#define in6(p, q, r, s, t, u) \
    llint a, b, c, d, e, f;   \
    cin >> p >> q >> r >> s >> t >> u
#define ins(s) \
    string s;  \
    cin >> s
#define arri(a) rep0(i, 0, n) cin >> a[i]
#define arro(a) rep0(i, 0, n) cout << a[i] << " "

#define db(x)                   \
    for (auto element : x)      \
        cout << element << " "; \
    lb;

#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define pp pop_back
#define yaas cout << "YES" \
                  << "\n"
#define nope cout << "NO" \
                  << "\n"
#define lb cout << endl;
#define bye return 0;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef long double ld;
typedef unsigned int uint;
typedef vector<llint> vecl;
typedef vector<vecl> vvec;
typedef vector<char> vecc;
typedef vector<bool> vecb;
typedef pair<llint, llint> pll;
typedef pair<llint, string> pls;
typedef map<llint, llint> mll;

int mod_add(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
int mod_mul(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
int mod_sub(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}

void tb()
{
    in1(n);
    int a, b;
    vecl va;
    vecl vb;
    vecl c;
    while (n--)
    {
        cin >> a;
        va.pb(a);
        cin >> b;
        vb.pb(b);
    }

    c.pb((vb[0] - va[1]) + vb[1]);
    rep0(i, 0, n - 1)
    {
        cout<<"yes"<<endl;
        c.pb((c[i] - va[i + 2]) + vb[i + 2]);
    }

    // db(va);
    // db(vb);
    // db(c);

    llint max = *max_element(c.begin(), c.end());

    cout << max;
    lb;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //in1(t)
    int t = 1;
    while (t--)
    {
        tb();
    }

    bye;
}