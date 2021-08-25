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
// 1 3 3 5 7 10 20
void solve(){

    lli n,k;
    cin>>n>>k;
    vec v(n);
    in(v);
    sort(all(v));
    if(k==0){
        if(v[0]==1){

            cout<<-1<<endl;
            return;
        }
        cout<<1<<endl;
        return;
    }
    if(k==n){

        cout<<v[n-1]<<endl;
        return;
    }
    if(v[k-1]==v[k]){

        cout<<-1<<endl;
        return;
    }
    else{

        cout<<(v[k-1]+v[k])/2<<endl;
    }
    // lli l=1,h=1e9,mid;
    // bool flag=false;
    // while(l<=h){

    //     mid=(l+h)/2;
    //     bool check=true;
    //     f(i,0,k){

    //         if(v[i]>mid){
    //             check==false;
    //             break;
    //         }   
    //     }
    //     f(i,k,n){

    //         if(v[i]<=mid){

    //             check=false;
    //             break;
    //         }
    //     }
    //     if(check){

    //         flag=true;
    //         break;
    //     }
    //     else{
    //         h=mid-1;
    //     }
    // }
    // if(flag)cout<<mid<<endl;
    // else cout<<-1<<endl;
    // lli j=0;
    // f(i,0,n){

    //     j++;
    //     if(j==k){

    //         if(v[i]==v[i+1] and i!=n-1){

    //             cout<<-1<<endl;
    //             return;
    //         }
    //         else{

    //             cout<<v[i]<<endl;
    //             return;
    //         }
    //     }
    // }

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}