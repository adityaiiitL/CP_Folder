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

void solve(){

    lli n,k;
    cin>>n>>k;
    vec v(n);
    in(v);
    lli len=0,s=0;
    deque<lli>q,q1;
    lli x=0,l=0;
    map m;
    f(i,0,n){

        x+=v[i];
        q1.push_back(v[i]);
        l++;
        if(l==k){

            m[x]++;
            // cout<<x<<endl;
            x-=q1.front();
            q1.pop_front();
            l--;
        }
    }
    lli mx=intmin,mxi;
    for(auto i:m){

        if(mx<i.second){

            mx=i.second;
            mxi=i.first;
        }
    }
    cout<<mxi<<endl;
    l=0;x=0;
    q1.clear();
    lli t;
    f(i,0,n){

        x+=v[i];
        l++;
        q.push_back(v[i]);
        if(l==k){

            if(x==mxi){

                t=i;
                break;
            }
            x-=q.front();
            q.pop_front();
        }
    }
    lli sum=mxi;
    vec temp;
    f(i,t,t+k){
        temp.pb(v[i]);
    }
    lli c=0,j=0;
    f(i,0,n){

        s+=v[i];
        len++;
        if(len==k+1){
            
            s-=q.front();
            // cout<<v[i]<<" "<<s<<" "<<q.front()<<endl;
            // s-=q.front();
            if(sum!=s){

                c++;
                if(j==k){
                    j=0;
                }
                s-=v[i];
                v[i]=temp[j];
                s+=temp[j];
                j++;
            }
            q.pop_front();
            len--;
        }
        q.push_back(v[i]);
    }
    out(v);
    cout<<c<<endl;
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