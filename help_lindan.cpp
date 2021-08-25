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
unordered_map<lli,vector<lli>>store;
lli find_freq(lli a[],lli n,lli left,lli right,lli element){

    lli temp1=lower_bound(store[element].begin(),store[element].end(),left)-store[element].begin();
    lli temp2=upper_bound(store[element].begin(),store[element].end(),right)-store[element].begin();
    return temp2-temp1;
}
void solve(){
    
    long long int n;
    cin>>n;
    lli a[10001]={0};
    for(li i=0;i<=10000;i++)a[i]=i;
    for(lli i=2;i<=10000;i++){
        
        if(a[i]==i){

            for(lli j=i*i;j<=10000;j+=i){

                a[j]=i;
            }
        }
    }
    for(lli i=0;i<10000;i++){
        store[a[i]].push_back(i);
    }
    while(n--){

        lli p,l,r;
        cin>>p>>l>>r;
        cout<<find_freq(a,10000,l,r,p)<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}