#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define f(i, k, n) for (int i = k; i < n; i++)

const int BLK = 555;

struct query
{
    int l, r, i;
};

query Q[200001];
int freq[1000001], v[200001];
int ans[200001];
int cnt = 0;

bool op(query a, query b)
{
    if (a.l / BLK != b.l / BLK)
    {
        return a.l / BLK < b.l / BLK;
    }
    return a.r < b.r;
}

void add(int n)
{
    cnt -= freq[v[n]] * freq[v[n]] * v[n];
    freq[v[n]]++;
    cnt += freq[v[n]] * freq[v[n]] * v[n];
}

void rem(int n)
{
    cnt -= freq[v[n]] * freq[v[n]] * v[n];
    freq[v[n]]--;
    cnt += freq[v[n]] * freq[v[n]] * v[n];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int n, q;
    cin >> n >> q;
    f(i, 0, n) cin >> v[i];
    f(i, 0, q)
    {
        cin >> Q[i].l >> Q[i].r;
        Q[i].i = i;
        Q[i].l--;
        Q[i].r--;
    }
    sort(Q, Q + q, op);
    int pl = 0, pr = -1;
    f(i, 0, q)
    {
        int l = Q[i].l;
        int r = Q[i].r;
        while (l < pl)
        {
            pl--;
            add(pl);
        }
        while (r > pr)
        {
            pr++;
            add(pr);
        }
        while (l > pl)
        {
            rem(pl);
            pl++;
        }
        while (r < pr)
        {
            rem(pr);
            pr--;
        }
        ans[Q[i].i] = cnt;
    }
    f(i, 0, q) cout << ans[i] << endl;
}