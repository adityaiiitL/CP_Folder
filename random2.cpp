#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define lli long long int
#define ld long double
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
    vec v(n),ans;
    // Nll:
    // stk s;
    // in(v);
    // f(i,0,n){

    //     bool flag=false;
    //     while(s.size()!=0){

    //         if(s.top()>v[i]){
    //             ans.pb(s.top());
    //             s.push(v[i]);
    //             flag=true;
    //             break;
    //         }else{
    //             s.pop();
    //         }
    //     }
    //     if(!flag){
    //         s.push(v[i]);
    //         ans.pb(-1);
    //     }
    // }
    // out(ans);
    // NLR:
    // in(v);
    // stk s;
    // fr(i,n-1,0){

    //     bool flag=false;
    //     while(s.size()!=0){

    //         if(s.top()>v[i]){
    //             ans.pb(s.top());
    //             s.push(v[i]);
    //             flag=true;
    //             break;
    //         }else{
    //             s.pop();
    //         }
    //     }
    //     if(!flag){
    //         s.push(v[i]);
    //         ans.pb(-1);
    //     }
    // }
    // reverse(ans.begin(),ans.end());
    // out(ans);
    in(v);
    stk s1,s2;
    vec nsl,nsr;
    // NSL-step
    f(i,0,n){

        bool flag=false;
        while(s1.size()!=0){

            if(v[s1.top()]<v[i]){
                nsl.pb(s1.top());
                s1.push(i);
                flag=true;
                break;
            }else{
                s1.pop();
            }
        }
        if(!flag){
            s1.push(i);
            nsl.pb(-1);
        }
    }
    // NSR-step
    fr(i,n-1,0){

        bool flag=false;
        while(s2.size()!=0){

            if(v[s2.top()]<v[i]){
                nsr.pb(s2.top());
                s2.push(i);
                flag=true;
                break;
            }else{
                s2.pop();
            }
        }
        if(!flag){
            s2.push(i);
            nsr.pb(n);
        }
    }
    reverse(nsr.begin(),nsr.end());
    lli mx=INT_MIN;
    f(i,0,n){
        mx=max(mx,v[i]*(nsr[i]-nsl[i]-1));
    }
    cout<<mx<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}