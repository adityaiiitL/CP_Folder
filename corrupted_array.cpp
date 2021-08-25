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

void solve(){

    lli n;
    cin>>n;
    vec v(n+2);
    in(v);
    sort(v.begin(),v.end());
    lli sum=0;
    f(i,0,n+1){

        sum+=v[i];
    }
    vec a;
    bool flag=false;
    lli k;
    f(i,0,n+1){

        if(sum-v[i]==v[n+1]){

            flag=true;
            k=i;
            break;
        }
    }
    if(flag){

        f(i,0,n+1){

            if(i!=k){
                a.pb(v[i]);
            }
        }
    }
    else{

        // flag=false;
        lli s=0;
        f(i,0,n){

            s+=v[i];
        }
        if(s==v[n]){

            f(i,0,n){

                a.pb(v[i]);
            }
        }
        else{

            cout<<-1<<endl;
            return;
        }
    }
    out(a);
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