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
// 1072
// 4x+7y=n
// x=(n-7y)/4
// 4x=n-7y
// (4x)%4=(n-7y)%4
// (n-7y)%4=0-->{0,1,2,3}
// n%4=7y
// n%4-(7y)%4=0
// (7y)%4=n%4

// |n-7y|%4=0
void solve(){

    lli n;
    cin>>n;
    if(n%4==0){

        cout<<n/4<<endl;
        return;
    }
    // lli temp=n%4;
    // lli i=0;
    // while(1){

    //     if(7)
    // }
    lli l=1,h=n/7,mid,mx=intmin;
    bool flag=false;
    while(l<=h){

        mid=(l+h)/2;
        lli temp=(n-7*mid);
        // cout<<mid<<" "<<temp/4<<endl;
        if(temp%4==0){

            mx=max(mx,temp/4);
            flag=true;
            h=mid-1;
        }
        else h=mid-1;
    }
    if(flag)cout<<mx<<endl;
    else cout<<"Impossible"<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}