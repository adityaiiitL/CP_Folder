#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
// Max-Element
li max_element(vector<li>v,li i,li n){

    if(i==n)return v[i-1];
    li temp=max(v[i],max_element(v,i+1,n));
    return temp;
}
// Min-Element
li min_element(vector<li>v,li i,li n){

    if(i==n)return v[i-1];
    li temp=min(v[i],min_element(v,i+1,n));
    return temp;
}
void solve(){

    li n;
    cin>>n;
    vector<li>v(n);
    for(li i=0;i<n;i++)cin>>v[i];
    cout<<max_element(v,0,n)<<endl;
    cout<<min_element(v,0,n)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}