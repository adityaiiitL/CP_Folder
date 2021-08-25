#include<bits/stdc++.h>
using namespace std;
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~Author: Aditya_Agrawal_2002~~//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
// #pragma GCC target ("avx2")
// #pragma GCC optimize ("O3")
// #pragma GCC optimize ("unroll-loops")
#define intmax 2147483647
#define intmin -2147483648
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define ld long double
#define lli long long int
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define pb(k) push_back(k)
#define map map<lli,lli>
#define vec vector<lli>
#define stk stack<lli>
#define endl '\n'

void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}

void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}

// Sieve Array
lli spf[1000001];
vec primes;
void sieve(){
    f(i,0,1000001)spf[i]=0;
    f(i,2,1000001){
        if(spf[i]==0){
            for(lli j=i*i;j<1000001;j+=i){
                if(spf[j]==0)spf[j]=1;
            }
        }
    }
    f(i,2,1000001){
        if(spf[i]==0)primes.pb(i);
    }
}

void solve(){

    lli n;
    cin>>n;
    vec v(n);
    in(v);
    lli mn=intmax,mni;
    f(i,0,n){

        if(mn>v[i]){
            mn=v[i];
            mni=i;
        }
    }
    // 3 2 1 2 3
    // 5 4 3 4 5
    // 6 5 6
    cout<<n-1<<endl;
    f(i,0,n){

        if(mni==i)continue;
        cout<<i+1<<' '<<mni+1<<' '<<mn+abs(i-mni)<<' '<<mn<<endl;
    }
}

signed main()
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