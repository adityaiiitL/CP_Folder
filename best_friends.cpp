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
void solve(){
    
    lli n,m;
    cin>>n>>m;
    lli a[n][m],sum=0;
    lli count_zeroes=0,count_neg=0;
    lli mn=INT_MAX,min_a=INT_MAX;
    for(lli i=0;i<n;i++){
        for(li j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]==0)count_zeroes++;
            if(a[i][j]<0){
                count_neg++;
            }
            sum+=abs(a[i][j]);
            min_a=min(min_a,abs(a[i][j]));
        }
    }
    if(count_zeroes>0){
        cout<<sum<<endl;
        return;
    }
    else{
        if(count_neg%2==0){
            cout<<sum<<endl;
        }
        else{
            cout<<sum-2*min_a<<endl;
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