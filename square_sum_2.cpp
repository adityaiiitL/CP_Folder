#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
void build(lli t[],lli a[],lli v,lli tl,lli tr){

    if(tl==tr){
        t[v]=a[tl];
    }
    else{

        lli tm=(tl+tr)/2;
        build(t,a,v*2,tl,tm);
        build(t,a,v*2+1,tm+1,tr);
        t[v]=t[v*2]+t[v*2+1];
    }
}
lli sum(lli t[],lli v,lli tl,lli tr,lli l,lli r){

    if(l>r)return 0;
    if(l==tl&&r==tr)return t[v];
    lli tm=(tl+tr)/2;
    return sum(t,v*2,tl,tm,l,min(r,tm))+sum(t,v*2+1,tm+1,tr,max(l,tm+1),r);
}
void update(lli t[],lli v, lli tl, lli tr, lli pos, lli new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        lli tm = (tl + tr) / 2;
        if (pos <= tm)
            update(t,v*2, tl, tm, pos, new_val);
        else
            update(t,v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2] + t[v*2+1];
    }
}
void solve(){
    
    li n,q;
    cin>>n>>q;
    lli a[n];
    for(lli i=0;i<n;i++){

        lli h;
        cin>>h;
        a[i]=h*h;
    }
    lli t[4*n];
    build(t,a,1,0,n-1);
    while(q--){

        lli temp,l,r;
        cin>>temp>>l>>r;
        if(temp==1){
            cout<<sum(t,1,0,n-1,l-1,r-1)%mdl<<endl;
        }
        else if(temp==2){
            update(t,1,0,n-1,l-1,r*r);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}