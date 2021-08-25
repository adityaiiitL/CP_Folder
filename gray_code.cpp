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
bool myComp(string s1,string s2){

    lli c1=0,c2=0;
    f(i,0,s1.size()){

        if(s1[i]=='1'){
            c1++;
        }
        if(s2[i]=='1'){
            c2++;
        }
    }
    if(abs(c1-c2)==1){

        return true;
    }
    else if(abs(c1-c2)==0){

        return false;
    }
    return false;
}
lli n;
unordered_set<string>v;
bool flag=true;
void gen(string s,lli i){

    if(i==n){

        v.insert(s);
        return;
    }
    if(flag==true){

        s.pb('0');
        flag=false;
        gen(s,i+1);
        s.pop_back();

        s.pb('1');
        // flag=true;
        gen(s,i+1);
        s.pop_back();
    }
    if(flag==false){

        s.pb('1');
        flag=true;
        gen(s,i+1);
        s.pop_back();

        s.pb('0');
        // flag=false;
        gen(s,i+1);
        s.pop_back();
    }
    
}
void solve(){

    cin>>n;
    string s;
    gen(s,0);
    // sort(v.begin(),v.end());
    // sort(v.begin(),v.end(),myComp);
    // lli k;
    // f(i,0,v.size()){

    //     if(v[i][n-1]=='1'&&v[i][n-2]=='1'){

    //         lli c=0;
    //         f(j,0,n){

    //             if(v[i][j]=='1')c++;
    //         }
    //         if(c==2){

    //             k=i;
    //             break;
    //         }
    //     }
    // }
    // sort(v.begin()+k,v.end(),myComp);
    for(auto i:v)cout<<i<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}