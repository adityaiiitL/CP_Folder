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
#define endl '\n'
int solve(){

    string s;
    cin>>s;
    if(s.length()==0||s.length()==1){
        return s.length();
    }
    int mx=0,count=0;
    map<char,int>m;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==' ')m[' ']++;
        else m[s[i]]++;
        count=1;
        for(int j=i+1;j<s.size();j++){

            if(s[j]==' ')m[' ']++;
            else m[s[j]]++;
            if(s[j]!=' '&&m[s[j]]==1){
                count++;
            }
            else if(s[j]!=' '&&m[s[j]]>1){
                m.clear();
                break;
            }
            else if(s[j]==' '&&m[' ']==1){
                count++;
            }
            else if(s[j]==' '&&m[' ']>1){
                m.clear();
                break;
            }
        }
        mx=max(mx,count);
    }
    return mx;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<solve();
    return 0;
}