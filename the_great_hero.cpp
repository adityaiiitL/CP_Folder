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

// 999*2-1000*2
// 1998-999
// 1001
bool myComp(pair<lli,lli>p1,pair<lli,lli>p2){

    return p1.first<p2.first;
}
void solve(){

    lli a,b,n;
    cin>>a>>b>>n;
    lli para=b;
    vec m(n),h(n);
    in(m);
    in(h);
    vector<pair<lli,lli>>v;
    f(i,0,n){

        v.pb(mp(m[i],h[i]));
    }
    sort(all(v),myComp);
    lli j=0;
    for(auto i:v){

        lli temp;
        if((i.second)%a==0)temp=(i.second)/a;
        else temp=i.second/a+1;
        b-=temp*(i.first);
        // cout<<b<<endl;
        if(b==0&&j!=n-1){

            cout<<"NO"<<endl;
            return;
        }
        if(b<0){

            lli diff=0-b;
            // cout<<diff<<endl;
            if(diff%(i.first)==0){

                if(diff/(i.first)>=1){

                    cout<<"NO"<<endl;
                    return;
                }
            }
            else{

                if(diff/(i.first)>=1){

                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        j++;
    }
    cout<<"YES"<<endl;
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