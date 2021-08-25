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
vector<lli>adj[300005];
bool vis[300005];
void bfs(lli v){

    queue<lli>q;
    q.push(v);
    vis[v]=true;
    while(q.size()!=0){

        lli temp=q.front();
        q.pop();
        for(auto i:adj[temp]){

            if(!vis[i]){

                q.push(i);
                vis[i]=true;
            }
        }
    }
}
void dfs(lli v){

    vis[v]=true;
    for(auto i:adj[v]){

        if(!vis[i]){

            dfs(i);
        }
    }
}
// 000111
// 110100

// 111000
// 
// 
void solve(){

    lli n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vec temp;
    // temp.pb(0);
    lli n0=0,n1=0;
    bool check=true;
    f(i,0,n){

        if(a[i]!=b[i])check=false;
        if(a[i]=='0')n0++;
        else n1++;
        if(n0==n1)temp.pb(i);
    }
    if(check){

        cout<<"YES"<<endl;
        return;
    }
    if(temp.size()==0){
        
        cout<<"NO"<<endl;
        return;
    }
    f(i,temp[temp.size()-1]+1,n){

        if(a[i]!=b[i]){

            cout<<"NO"<<endl;
            return;
        }
    }
    // cout<<temp.size()<<endl;
    // for(auto i:temp)cout<<i<<" ";
    // cout<<endl;
    temp.insert(temp.begin(),0);
    f(i,0,temp.size()-1){
    
        bool flag=true; 
        if(i==0){

            if(a[0]==b[0]){

                f(j,temp[i],temp[i+1]+1){

                    if(a[j]!=b[j]){

                        flag=false;
                        break;
                    }
                }
            }
            else{

                f(j,temp[i],temp[i+1]+1){

                    if(a[j]==b[j]){

                        flag=false;
                        break;
                    }
                }
            }
            if(!flag){
                cout<<"NO"<<endl;
                return;
            }
            continue;
        }
        if(a[temp[i]+1]!=b[temp[i]+1]){

            // cout<<1<<endl;
            f(j,temp[i]+1,temp[i+1]+1){

                if(a[j]==b[j]){

                    flag=false;
                    break;
                }
            }
        }
        else{

            // cout<<2<<endl;
            f(j,temp[i]+1,temp[i+1]+1){

                if(a[j]!=b[j]){

                    flag=false;
                    break;
                }
            }
        }
        if(!flag){

            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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