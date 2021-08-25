#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
void solve(){

    li n,k;
    cin>>n>>k;
    vector<li>v,v1;
    for(li i=0;i<n;i++){
        li h;cin>>h;
        v.push_back(h);
    }
    deque<li>d;
    li count=0,max_element=0;
    for(li i=0;i<n;i++){

        if(count==k){
            d.pop_front();
            v1.push_back(max_element);
            max_element=0;
        }
        d.push_back(v[i]);
        max_element=max(max_element,v[i]);
        count++;

    }
    for(li i=0;i<n-k+1;i++)cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}