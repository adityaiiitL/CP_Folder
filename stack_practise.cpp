#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
void solve()
{
    li n;
    cin>>n;
    vector<li>v;
    map<li,li>m;
    for(li i=0;i<n;i++){
        li h;
        cin>>h;
        v.push_back(h);
        m[h]=i;
    }
    stack<li>s;
    s.push(-1);
    vector<li>v1;
    v1.push_back(-1);
    li main_base=v[n-1];
    for(li i=v.size()-2;i>=0;i--){
        li base=v[i+1];
        if(v[i]<base){
            s.push(v[i]);
            v1.push_back(m[base]);
        }
        else if(v[i]>base&&v[i]<main_base){
            s.pop();
            s.push(v[i]);
            v1.push_back(m[main_base]);
        }
        else if(v[i]>base&&v[i]>main_base){
            s.pop();
            s.push(v[i]);
            v1.push_back(-1);
            main_base=v[i];
        }
    }
    for(int i=v1.size()-1;i>=0;i--)cout<<v1[i]<<" ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}