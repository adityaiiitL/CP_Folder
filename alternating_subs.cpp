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

void solve(){

    lli n;
    cin>>n;
    vec v(n);
    in(v);
    lli sum=0;
    bool fp=false,fn=false;
    f(i,0,n){

        if(v[i]>0){

            lli mxp=v[i],j;
            for(j=i+1;j<n;j++){

                if(v[j]<0){

                    break;
                }
                mxp=max(mxp,v[j]);
            }
            sum+=mxp;
            i=j-1;
        }
        else{

            lli mxn=v[i],j;
            for(j=i+1;j<n;j++){

                if(v[j]>0){

                    break;
                }
                mxn=max(mxn,v[j]);
            }
            sum+=mxn;
            i=j-1;
        }
    }
    cout<<sum<<endl;
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