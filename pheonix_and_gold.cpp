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

    lli n,x;
    cin>>n>>x;
    vec v(n);
    in(v);
    sort(v.begin(),v.end());
    lli k=-1,s=0;
    f(i,0,n)s+=v[i];
    if(s==x){
        cout<<"NO"<<endl;
        return;        
    }
    if(x>s){
        cout<<"YES"<<endl;
        out(v);
        return;
    }
    f(i,0,n){

        if(v[i]>x){
            k=i;
            break;
        }
    }
    if(k!=-1){

        cout<<"YES"<<endl;
        cout<<v[k]<<" ";
        f(i,0,n){
            if(i==k)continue;
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else{

        lli sum=0;
        f(i,0,n){

            sum+=v[i];
            if(sum==x){
                k=i;
                break;
            }
        }
        if(k==-1){
            cout<<"YES"<<endl;
            out(v);
        }
        else{
            lli sum=0;
            cout<<"YES"<<endl;
            f(i,0,n){
                
                if(i==k)continue;
                cout<<v[i]<<" ";
            }
            cout<<v[k]<<endl;
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