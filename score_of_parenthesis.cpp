#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

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

    string s;
    cin>>s;
    lli count=0;
    stk st;
    bool flag=false;
    f(i,0,s.size()){

        if(s[i]=='(')st.push(s[i]);
        if(s[i]==')'){

            st.pop();
            if(st.size()!=0&&flag==false){
                count+=(st.size())*2;
                cout<<st.size()*2<<endl;
                flag=true;
            }
            else{
                if(!flag){
                    count++;
                    // cout<<count<<endl;
                }
                else{
                    flag=false;
                }
            }
        }
    }
    cout<<count<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}