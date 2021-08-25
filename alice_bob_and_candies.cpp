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
    vec v(n);
    in(v);
    lli a=0,b=0,a_prev=0,b_prev=0;
    deque<lli>dq;
    f(i,0,n){
        dq.push_back(v[i]);
    }
    lli count=0;
    f(i,0,n){

        bool fa=false,fb=false;
        lli a_present=0;
        lli b_present=0;
        while(dq.size()!=0){

            a_present+=dq.front();
            dq.pop_front();
            if(a_present>b_prev||dq.size()==0){

                count++;
                a_prev=a_present;
                fa=true;
                a+=a_present;
                break;
            }
        }
        while(dq.size()!=0){

            b_present+=dq.back();
            dq.pop_back();
            if(b_present>a_prev||dq.size()==0){

                count++;
                b_prev=b_present;
                b+=b_present;
                fb=true;
                break;
            }
        }
        if(fa==false||fb==false){

            cout<<count<<" "<<a<<" "<<b<<endl;
            return;
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