#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
void solve(){

    li n;
    cin>>n;
    queue<li>q;
    for(li i=1;i<=n;i++){
        q.push(i);
    }
    // or li size=q.size();
    for(li i=1;i<=q.size();i++){
        cout<<q.front()<<endl;
        q.pop();
        q.push(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}