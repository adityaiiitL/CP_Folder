// Author: Aditya Agrawal //
#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#define debug(x)			 	\
    for(auto element:x)      	\
        cout<<element<<" ";  	\
        cout<<endl;
#define debugp(x)          	\
    for(auto element:x)    		\
        cout<<element.first<<" "<<element.second<<endl
#define db(x) cout<< #x<<"="<<x<<'\n'
#define makegraph(adj, num)   	\
for (int i=0;i<num;i++) 	\
{                             	\
    int x,y;                 	\
    cin>>x>>y;            		\
    adj[x].push_back(y);      	\
    adj[y].push_back(x);      	\
}
typedef long int li;
typedef long long int lli;
typedef unsigned long long int ull;
typedef long double ld;
#define intmax 2147483647
#define intmin -2147483648
#define pi 3.141592653589
#define mod 1000000007
#define mdl 998244353
#define fo return
#define br cout<<endl
#define nah cout<<"NO"<<endl
#define yeah cout<<"YES"<<endl
#define all(a) a.begin(),a.end()
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define gsort(x) sort(all(x),greater<lli>())
#define cntleadz(x) __builtin_clz(x)
#define cnttrailz(x) __builtin_ctz(x)
#define cntpop(x) __builtin_popcount(x)
#define binparity(x) __builtin_parity(x)
#define mp(a,b) make_pair(a,b)
#define pb(k) push_back(k)
#define map map<lli,lli>
#define vec vector<lli>
#define stk stack<lli>
#define endl '\n'
#define gcd __gcd

void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}

void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}
int vis[1<<21];
int N;
int solve(int msk2){
    queue<int>q;
    q.push(msk2);
    vis[msk2] =1;
    for(int i =0;;i++){
        int sz = q.size();
        if(q.size() == 0)return 1e9;
        for(int _=0;_<sz;_++){

            int msk = q.front();
            q.pop();
           //             cout<<msk<<endl;
            if(!msk)return i;
            int pos[11];
            int mx[5];
            for(int i=0;i<4;i++) mx[i] =1e9;
            for(int i=N-1;i>=0;i--){
               pos[i] = (msk>>(i<<1))&3;
                mx[pos[i]] = i;
             //   cout<<pos[i]<<" ";
            }   
            //cout<<endl;
            
            for(int i=0;i<4;i++){
               for(int j=0;j<4;j++){
                   if(mx[i]<mx[j]){
                       int msk1 = msk & (~(3<<(mx[i]<<1)));
                       msk1 |= j<<(mx[i]<<1); 
                       
                       if(vis[msk1] == 0){
                           vis[msk1] = 1;
                           q.push(msk1);
                       }
                   }
               }
            }
        
        }
    }
    
}

int main(){
   
    cin >> N;
    vector<int> a(N);
    int msk = 0;
    for(int a_i = 0;a_i < N;a_i++){
       cin >> a[a_i];
        a[a_i]--;
       msk |= a[a_i]<<(a_i<<1);
    }
    cout<<solve(msk)<<endl;
    return 0;
}