#include<bits/stdc++.h>
using namespace std;
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~Author: Aditya_Agrawal_2002~~//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
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
#define all(a) a.begin(),a.end()
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define mp(a,b) make_pair(a,b)
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
void solve(){

    lli n;
    cin>>n;
    vec fact;
    f(i,2,sqrt(n)+1){

        if(n%i==0){

            if(n/i==i)fact.pb(i);
            else{
                fact.pb(i);
                if(n/i!=1)fact.pb(n/i);
            }
        }
    }
    sort(all(fact));
    // out(fact);
    if(fact.size()==0){

        // cout<<"Hii"<<endl;
        cout<<1<<endl;
        cout<<n<<endl;
        return;
    }
    else {

        // lli i=fact[0];
        vec ans;
        lli mx=intmin;
        f(i,0,fact.size()){

            vec imp;
            lli a=n;
            while(a%fact[i]==0){

                lli temp=a/fact[i];
                if(temp%fact[i]==0){
                    
                    imp.pb(fact[i]);
                    a/=fact[i];
                }
                else break;
            }
            imp.pb(a);
            if(imp.size()>mx){

                ans.clear();
                f(j,0,imp.size())ans.pb(imp[j]);
                mx=imp.size();
            }
        }
        cout<<ans.size()<<endl;
        out(ans);
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