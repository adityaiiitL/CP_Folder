#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
void solve()
{
    stack<li>s;
    li n;cin>>n;
    for(li i=0;i<n;i++)
    {
        li h;cin>>h;
        s.push(h);
    }
    for(li i=0;i<n;i++)
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}