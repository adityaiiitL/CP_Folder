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

// Sieve Array
lli spf[100001];
void sieve(){
    f(i,0,100001)spf[i]=i;
    f(i,2,100001){
        if(spf[i]==i){
            for(lli j=i*i;j<100001;j+=i){
                if(spf[j]==j)spf[j]=i;
            }
        }
    }
}

// Binary Exponentiation (Recursive method)
lli pow_rec(lli a,lli b){
    if(b==0)return 1;
    if(b%2==1){
        return a*pow_rec(a,b-1);
    }
    else{
        return pow_rec(a,b/2)*pow_rec(a,b/2);
    }
}
// Binary Exponentiation (Iterative Method)
lli pow_itr(lli a,lli b){
    lli p=1;
    while(b){
        if(b&1==1){
            p*=a;
        }
        a*=a;
        b=b>>1;
    }
    return p;
}
void solve(){

    lli n;
    cin>>n;

    string s;
    cin>>s;
    string s1;
    lli sum=0;
    f(i,0,s.size()){

        lli temp=s[i]-'0';
        sum+=temp;
    }
    lli imp=s[s.size()-1]-'0';
    if(sum%2==0&&imp%2==1){
        cout<<s<<endl;
        return;
    }
    if(s.size()==1){
        cout<<-1<<endl;
        return;
    }
    if(sum%2==0){

        bool flag=false;
        fr(i,s.size()-1,0){

            lli temp=s[i]-'0';
            if(temp%2==1&&flag==false){

                flag=true;
            }
            if(flag){

                s1.pb(s[i]);
            }
        }
        reverse(s1.begin(),s1.end());
    }
    else{

        bool flag=false;
        fr(i,n-1,0){

            lli temp=s[i]-'0';
            if(temp%2==1&&flag==false){

                flag=true;
            }
            if(flag){
                s1.pb(s[i]);
            }
        }
        reverse(s1.begin(),s1.end());
        f(i,0,s1.size()){

            lli temp=s1[i]-'0';
            if(temp%2==1){

                if(i==0&&s1[i+1]=='0')continue;
                else{
                    s1.erase(i,1);
                    break;
                }
            }
        }
    }
    lli test=0;
    f(i,0,s1.size()){

        lli temp=s1[i]-'0';
        test+=temp;
    }
    imp=s1[s1.size()-1]-'0';
    if(test%2==0&&imp%2==1){
        cout<<s1<<endl;
    }
    else cout<<-1<<endl;
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