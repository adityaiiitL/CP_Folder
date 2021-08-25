#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
// Linear-search
li search(vector<li>v,li i,li n,li k){

    if(i==n)return -1;
    if(v[i]==k)return i;
    return search(v,i+1,n,k);

}
// Binary-search
li Binary_search(vector<li>v,li i,li n,li k){

    if(i>n)return -1;
    li mid=(i+n)/2;
    if(v[mid]==k)return mid;
    if(v[mid]<k)return Binary_search(v,mid+1,n,k);
    return Binary_search(v,i,mid-1,k);
}
void solve(){

    li n;
    cin>>n;
    vector<li>v(n);
    for(li i=0;i<n;i++)cin>>v[i];
    li k;
    cin>>k;
    cout<<search(v,0,n,k)<<endl;
    cout<<Binary_search(v,0,n-1,k)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}