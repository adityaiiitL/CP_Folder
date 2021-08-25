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

    lli k,d0,d1;
    cin>>k>>d0>>d1;
    if(k<=7){

        string s;
        char temp1=d0+'0',temp2=d1+'0';
        s.pb(temp1);
        s.pb(temp2);
        k-=2;
        lli sum=d0;
        lli check=d0+d1;
        while(k--){

            lli temp=s[s.size()-1]-'0';
            sum+=temp;
            char imp=sum%10+'0';
            check+=sum%10;
            s.pb(imp);
        }
        if(check%3==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{

        string s;
        char temp1=d0+'0',temp2=d1+'0';
        s.pb(temp1);
        s.pb(temp2);
        lli p=7;
        p-=2;
        lli sum=d0;
        lli check=d0+d1;
        while(p--){

            lli temp=s[s.size()-1]-'0';
            sum+=temp;
            char imp=sum%10+'0';
            check+=sum%10;
            s.pb(imp);
        }
        lli a=0,b=0;
        f(i,0,3){
            lli temp=s[i]-'0';
            a+=temp;
        }
        f(i,3,7){
            lli temp=s[i]-'0';
            b+=temp;
        }
        // cout<<s<<endl;
        if((k-3)%4==0){

            if((((k-3)/4)*b+a)%3==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if((k-3)%4==1){

            lli temp=s[3]-'0';
            if((((k-3)/4)*b+a+temp)%3==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if((k-3)%4==2){

            lli temp1=s[3]-'0';
            lli temp2=s[4]-'0';
            if((((k-3)/4)*b+a+temp1+temp2)%3==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if((k-3)%4==3){

            lli temp1=s[3]-'0';
            lli temp2=s[4]-'0';
            lli temp3=s[5]-'0';
            if((((k-3)/4)*b+a+temp1+temp2+temp3)%3==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
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