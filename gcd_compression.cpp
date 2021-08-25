#include<bits/stdc++.h>
using namespace std;
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

void solve(){

    lli n;
    cin>>n;
    vec v(2*n);
    in(v);
    lli k=1;
    lli c=0;
    map m;
    f(i,0,2*n-1){

        f(j,i+1,2*n){

            if(spf[v[i]+v[j]]>1)m[spf[v[i]+v[j]]]++;
        }
    }
    lli mx=intmin,mxi;
    for(auto i:m){

        if(mx<i.second){

            mx=i.second;
            mxi=i.first;
        }
    }
    f(i,0,2*n-1){

        if(c==n-1){

            break;
        }
        f(j,i+1,2*n){

            if(spf[v[i]+v[j]]==mxi&&v[j]>=0&&v[i]>=0){

                cout<<i+1<<" "<<j+1<<endl;
                v[j]=-1;
                v[i]=-1;
                c++;
            }
        }
    }    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}