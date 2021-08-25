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

void solve(){

    lli n;
    cin>>n;
    lli a[n];
    stack<lli>s;
    f(i,0,n){
        cin>>a[i];  
    } 
    lli mx=intmin;
    s.push(a[n-1]);
    fr(i,n-2,0){

        bool flag=false;
        while(s.size()!=0){

            if(s.top()<a[i]){

                lli temp=a[i]^s.top();
                mx=max(mx,temp);
                s.push(a[i]);
                flag=true;
                break;
            }
            else{
                s.pop();
            }
        }
        if(flag){

            s.push(a[i]);
        }
    }
    stack<lli>s1;
    s1.push(a[0]);
    f(i,1,n){

        bool flag=false;
        while(s1.size()!=0){

            if(s1.top()<a[i]){

                lli temp=a[i]^s1.top();
                mx=max(mx,temp);
                s1.push(a[i]);
                flag=true;
                break;
            }
            else{
                s1.pop();
            }
        }
        if(flag){

            s1.push(a[i]);
        }
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