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
lli count(vector<lli>v,lli mid,lli n){

    lli odd=0,even=0;
    for(lli i=1;i<pow(2,n);i++){

        lli imp=1;
        for(li j=0;j<n;j++){
            if(i&(1<<j)){
                imp*=v[j];
            }
        }
        lli p=0,a=i;
        while(a>0){
            p+=(a&1);
            a=a>>1;
        }
        if(p&1)odd+=(mid/imp);
        else even+=(mid/imp);
    }
    return odd-even;
}
void solve(){
    
    lli n,k;
    cin>>n>>k;
    vector<lli>v(n);
    for(lli i=0;i<n;i++)cin>>v[i];
    lli low=1,high=100000000000000000;
    while(low<=high){

        lli mid=(low+high)/2;
        lli temp1=count(v,mid,n),temp2=count(v,mid-1,n);
        if(temp1==k&&temp2<k){
            cout<<mid<<endl;
            return;
        }
        if(temp1<k)low=mid+1;
        else high=mid-1;
    }
    cout<<1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}