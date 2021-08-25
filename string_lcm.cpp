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

    string s,t;
    cin>>s>>t;
    lli n1=s.size(),n2=t.size();
    if(s.size()>t.size()){

        string imp1=s;
        string imp2=t;

            lli temp=(s.size()*t.size())/(__gcd(s.size(),t.size()));
            // cout<<temp<<endl;
            if((s.size())%(t.size())==0){

                f(i,0,(n1/n2)-1){
                    t+=imp2;
                }
                bool flag=true;
                f(i,0,s.size()){

                    if(s[i]!=t[i])flag=false;
                }
                if(flag)cout<<t<<endl;
                else{
                    cout<<-1<<endl;
                }
            }
            else if((s.size())%(t.size())!=0){
                // cout<<temp<<endl;
                f(i,0,(temp/n1)-1)s+=imp1;
                f(i,0,(temp/n2)-1)t+=imp2;
                bool flag=true;
                f(i,0,s.size()){

                    if(s[i]!=t[i])flag=false;
                }
                if(flag)cout<<t<<endl;
                else cout<<-1<<endl;
            }
    }
    else if(s.size()<t.size()){

        string imp1=s;
        string imp2=t;

            lli temp=(s.size()*t.size())/(__gcd(s.size(),t.size()));
            // cout<<temp<<endl;
            if((t.size())%(s.size())==0){

                f(i,0,(n2/n1)-1){
                    s+=imp1;
                }
                bool flag=true;
                f(i,0,t.size()){

                    if(t[i]!=s[i]){
                        flag=false;
                        break;
                    }
                }
                if(flag)cout<<s<<endl;
                else{
                    cout<<-1<<endl;
                }
            }
            else if((t.size())%(s.size())!=0){
                // cout<<temp<<endl;
                f(i,0,(temp/n1)-1)s+=imp1;
                f(i,0,(temp/n2)-1)t+=imp2;
                bool flag=true;
                f(i,0,s.size()){

                    if(s[i]!=t[i]){
                        flag=false;
                        break;
                    }
                }
                if(flag)cout<<t<<endl;
                else cout<<-1<<endl;
            }
    }
    else if(s.size()==t.size()){

        bool flag=true;
        f(i,0,s.size()){

            if(s[i]!=t[i]){
                flag=false;
                break;
            }
        }
        if(flag)cout<<t<<endl;
        else cout<<-1<<endl;
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