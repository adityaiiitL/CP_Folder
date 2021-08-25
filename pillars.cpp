// Author: Aditya Agrawal //
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
    if(n==1){
        cout<<"NO"<<endl;
        return;
    }
    // bool flag=true;
    f(i,0,n){

        if(v[i]==v[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    lli mx=-1,mxi,mn=intmax;
    f(i,0,n){

        if(mx<v[i]){

            mx=v[i];
            mxi=i;
        }
        // mn=min(mn,v[i]);
    }
    bool flag=true;
    // cout<<mxi<<endl;
    f(i,0,mxi){

        if(v[i]>v[i+1]){
            flag=false;break;
        }
    }
    // cout<<flag<<endl;
    if(flag){

        bool f=true;
        f(i,mxi,n-1){

            if(v[i]<v[i+1]){
                f=false;break;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}