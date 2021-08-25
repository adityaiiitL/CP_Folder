#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
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
lli spf[100001];
void sieve(){
    f(i,0,100001)spf[i]=i;
    f(i,2,100001){
        if(spf[i]==i){
            for(lli j=i*i;j<100001;j+=i){
                if(spf[j]==j)spf[j]=i;
            }
        }
    }
}

// Binary Exponentiation (Recursive method)
lli pow_rec(lli a,lli b){
    if(b==0)return 1;
    if(b%2==1){
        return a*pow_rec(a,b-1);
    }
    else{
        return pow_rec(a,b/2)*pow_rec(a,b/2);
    }
}
// Binary Exponentiation (Iterative Method)
lli pow_itr(lli a,lli b){
    lli p=1;
    while(b){
        if(b&1==1){
            p*=a;
        }
        a*=a;
        b=b>>1;
    }
    return p;
}
void solve(){

    lli n;
    cin>>n;
    vec v(n);
    in(v);
    lli sum1=0;
    f(i,0,n)sum1+=v[i];
    if(sum1%2==1){
        cout<<"NO"<<endl;
        return;
    }
    lli sum=sum1/2;
    lli dp[n+1][sum+1];
    dp[0][0]=1;
    f(i,0,n+1){
        f(j,0,sum+1){

            if(i==0&&j!=0)dp[i][j]=0;
            if(j==0&&i!=0)dp[i][j]=1;
        }
    }
    f(i,1,n+1){
        f(j,1,sum+1){

            if(j>=v[i-1]){
                dp[i][j]=dp[i-1][j-v[i-1]]|dp[i-1][j];
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    if(dp[n][sum])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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