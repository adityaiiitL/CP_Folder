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
#define mp(a,b) make_pair(a,b)
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
// a=2,b=1
// 10001
// 11001
// 10011
// 11011
// 11111
void solve(){

    lli n;
    cin>>n;
    string s;
    cin>>s;
    lli a=0,b=0,j=0;
    lli temp=intmin;
    if(n==1&&s[0]=='1'){

        cout<<"ALICE"<<endl;
        return;
    }
    while(1){

        bool flag=true,f=true;
        f(i,0,n){

            if(s[i]=='0'){
                f=false;
                break;
            }
        }
        if(f)break;
        f(i,0,n/2){

            if(s[i]!=s[n-i-1]){

                flag=false;
                break;
            }
        }
        if(flag){

            bool pos=false;
                f(i,0,n/2){

                    if(s[i]=='0'&&s[n-i-1]=='1'){

                        // cout<<j<<endl;
                        pos=true;
                        s[i]='1';
                        if(j%2==0)a++;
                        else b++;
                        break;
                    }
                }
                if(!pos){

                    f(i,n/2,n){

                        if(s[i]=='0'&&s[n-i-1]=='1'){

                            // cout<<"HII"<<endl;
                            pos=true;
                            s[i]='1';
                            if(j%2==0)a++;
                            else b++;
                            break;
                        }
                    }
                }
                if(!pos){

                    if(s[n/2]=='0'){

                        // cout<<s<<endl;
                        s[n/2]='1';
                        if(j%2==0)a++;
                        else b++;
                    }
                    else{

                        f(i,0,n){

                            if(s[i]=='0'){

                                s[i]='1';
                                if(j%2==0)a++;
                                else b++;
                                break;
                            }
                        }
                    }
                }
        }
        else{

            if(j-temp>=2){

                temp=j;   
                reverse(s.begin(),s.end());
            }
            else{

                bool pos=false;
                f(i,0,n/2){

                    if(s[i]=='0'&&s[n-i-1]=='1'){

                        // cout<<j<<endl;
                        pos=true;
                        s[i]='1';
                        if(j%2==0)a++;
                        else b++;
                        break;
                    }
                }
                if(!pos){

                    f(i,n/2,n){

                        if(s[i]=='0'&&s[n-i-1]=='1'){

                            // cout<<"HII"<<endl;
                            pos=true;
                            s[i]='1';
                            if(j%2==0)a++;
                            else b++;
                            break;
                        }
                    }
                }
                if(!pos){

                    if(s[n/2]=='0'){

                        // cout<<"Hii"<<endl;
                        s[n/2]='1';
                        if(j%2==0)a++;
                        else b++;
                    }
                    else{

                        f(i,0,n){

                            if(s[i]=='0'){

                                s[i]='1';
                                if(j%2==0)a++;
                                else b++;
                                break;
                            }
                        }
                    }
                }
            }
        }
        // cout<<s<<endl;
        // cout<<a<<" "<<b<<endl;
        j++;
    }
    if(a>b)cout<<"BOB"<<endl;
    if(a<b)cout<<"ALICE"<<endl;
    if(a==b)cout<<"DRAW"<<endl;
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