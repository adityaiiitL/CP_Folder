#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define ld long double
#define lli long long int
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define pb(k) push_back(k)
#define map map<lli,lli>
#define vec vector<lli>
#define stk stack<lli>
#define endl '\n'
void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}
void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}
void solve(){

    
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set< pair<int,int> > nodes;
    int N,a,b,c,d;
    string s;
    vector<string> grid;
    
    cin >> N;
    for (int i=0; i<N; ++i) {
        cin >> s;
        grid.push_back(s);
    }
    cin >> a >> b >> c >> d;
    if (a == c && b == d) {
        cout << 0;
        return 0;
    }
    
    const pair<int,int> start{a,b};
    const pair<int,int> end{c,d};
    grid[a][b] = 's';
    grid[c][d] = 'e';
    nodes.insert(start);
    
    int moves = 0, x;
    pair<int, int> p;
    while (true) {
        moves++;
        set< pair<int, int> > nodes_new;
        for (auto &n : nodes) {
            for (x = n.first - 1; x >= 0; --x) {
                if (grid[x][n.second] == 'X' || grid[x][n.second] == 's')
                    break;
                if (grid[x][n.second] == ' ')
                    continue;
                if (grid[x][n.second] == '.') {
                    grid[x][n.second] = ' ';
                    p.first = x;
                    p.second = n.second;
                    nodes_new.insert(p);
                }
                else if (grid[x][n.second] == 'e') {
                    cout << moves;
                    return 0;
                }
            }
            for (x = n.first + 1; x < N; ++x) {
                if (grid[x][n.second] == 'X' || grid[x][n.second] == 's')
                    break;
                if (grid[x][n.second] == ' ')
                    continue;
                if (grid[x][n.second] == '.') {
                    grid[x][n.second] = ' ';
                    p.first = x;
                    p.second = n.second;
                    nodes_new.insert(p);
                }
                else if (grid[x][n.second] == 'e') {
                    cout << moves;
                    return 0;
                }
            }
            for (x = n.second - 1; x >= 0; --x) {
                if (grid[n.first][x] == 'X' || grid[n.first][x] == 's')
                    break;
                if (grid[n.first][x] == ' ')
                    continue;
                if (grid[n.first][x] == '.') {
                    grid[n.first][x] = ' ';
                    p.first = n.first;
                    p.second = x;
                    nodes_new.insert(p);
                }
                else if (grid[n.first][x] == 'e') {
                    cout << moves;
                    return 0;
                }
            }
            for (x = n.second + 1; x < N; ++x) {
                if (grid[n.first][x] == 'X' || grid[n.first][x] == 's')
                    break;
                if (grid[n.first][x] == ' ')
                    continue;
                if (grid[n.first][x] == '.') {
                    grid[n.first][x] = ' ';
                    p.first = n.first;
                    p.second = x;
                    nodes_new.insert(p);
                }
                else if (grid[n.first][x] == 'e') {
                    cout << moves;
                    return 0;
                }
            }
        }
        for (auto &n : nodes_new)
            nodes.insert(n);
    }
    return 0;
}