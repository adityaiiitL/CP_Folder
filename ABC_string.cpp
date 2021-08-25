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

    string s;
    cin>>s;
    set<char>st;
    f(i,0,s.size()){
        st.insert(s[i]);
    }
    if(st.size()==1){

        cout<<"NO"<<endl;
        return;
    }
    else if(st.size()==2){

        lli i=0;
        char p,q;
        p=s[0];
        for(lli i=1;i<s.size();i++){

            if(s[i]!=p){
                q=s[i];
                break;
            }
        }
        // cout<<p<<" "<<q<<endl;
        stack<char>x;
        f(i,0,s.size()){

            if(s[i]==p)x.push(s[i]);
            if(s[i]==q&&x.size()!=0){
                x.pop();
            }
            else if(s[i]==q&&x.size()==0){
                cout<<"NO"<<endl;
                return;
            }
        }
        // cout<<x.size()<<endl;
        if(x.size()==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if(st.size()==3){

        lli i=0;
        char p,q,r;
        p=s[0];
        bool f=true;
        for(lli i=1;i<s.size();i++){

            if(s[i]!=p&&f){

                q=s[i];
                f=false;
            }
            if(s[i]!=q&&f==false&&s[i]!=p){

                r=s[i];
                break;
            }
        }
        // cout<<p<<" "<<q<<" "<<r<<endl;
        stack<char>x;
        bool flag=true;
        f(i,0,s.size()){

            if(s[i]==p)x.push(s[i]);
            if((s[i]==q||s[i]==r)&&x.size()==0){

                flag=false;
                break;
            }
            else if((s[i]==q||s[i]==r)&&x.size()!=0){
                x.pop();
            }
        }
        if(x.size()==0&&flag)cout<<"YES"<<endl;
        else{

            stack<char>y;
            bool flag_last=true;
            f(i,0,s.size()){

            if(s[i]==p||s[i]==r)y.push(s[i]);
            if((s[i]==q)&&y.size()==0){

                flag_last=false;
                break;
            }
            else if((s[i]==q)&&y.size()!=0){
                y.pop();
            }
        }
        if(y.size()==0&&flag_last==true)cout<<"YES"<<endl;
        else{

            stack<char>z;
            // bool flag_last=true;
            f(i,0,s.size()){

            if(s[i]==p||s[i]==q)z.push(s[i]);
            if((s[i]==r)&&z.size()==0){

                cout<<"NO"<<endl;
                return;
            }
            else if((s[i]==r)&&z.size()!=0){
                z.pop();
            }
        }
        if(z.size()==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
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