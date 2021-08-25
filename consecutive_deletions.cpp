#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
void solve(){

    lli n,k;
    cin>>n>>k;
    vector<li>v(n),v1(n);
    lli sum=0;
    for(lli i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(n==k){

        cout<<sum*(sum+1)/2<<endl;
        return;
    }
    lli no_of_ones=sum;
    v1[0]=v[0];
    for(lli i=1;i<n;i++)v1[i]=v1[i-1]+v[i];
    lli min_sum=v[k-1];
    for(lli i=k;i<n;i++){

        min_sum=fmin(min_sum,v1[i]-v[i-k]);
    }
    lli ans=min_sum*(min_sum+1)/2+no_of_ones-min_sum;
    cout<<ans<<endl;
    
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){

        solve();
    }
    return 0;
}