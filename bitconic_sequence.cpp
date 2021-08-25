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
lli lbs(vector<lli>v,lli n){

    lli inc[n],dec[n];
    inc[0]=1;
    dec[n-1]=1;
    for(lli i=1;i<n;i++){

        if(v[i]>v[i-1])inc[i]=inc[i-1]+1;
        else inc[i]=1;
    }
    for(lli i=n-2;i>=0;i--){

        if(v[i]>v[i+1])dec[i]=dec[i+1]+1;
        else dec[i]=1;
    }
    lli max=inc[0]+dec[0]-1;
    for(lli i=1;i<n;i++){
        if(inc[i]+dec[i]-1>max)max=inc[i]+dec[i]-1;
    }
    return max;
}
void solve(){
    
    lli n,q;
    cin>>n>>q;
    vector<lli>v(n);
    for(lli i=0;i<n;i++)cin>>v[i];
    while(q--){

        lli k,l,r;
        cin>>k>>l>>r;
        if(k==1){

            vector<lli>v1;
            lli j=l-1,i=0;
            for(;j<=r-1;j++){
                v1.push_back(v[j]);
                i++;
            }
            cout<<lbs(v1,i)<<endl;
        }
        else v[l-1]=r;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}