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

vec v;
lli st[1000001];
void buildTree(lli si,lli ss,lli se){

    if(ss==se){

        st[si]=v[ss];
        return;
    }
    lli mid=(ss+se)/2;
    buildTree(2*si,ss,mid);
    buildTree(2*si+1,mid+1,se);

    st[si]=min(st[2*si],st[2*si+1]);
}

lli query(lli si,lli ss,lli se,lli qs,lli qe){

    if(qs>se||qe<ss){

        return intmax;
    }
    if(qs<=ss&&se<=qe){

        return st[si];
    }
    lli mid=(ss+se)/2;
    lli l=query(2*si,ss,mid,qs,qe);
    lli r=query(2*si+1,mid+1,se,qs,qe);

    return min(l,r);
}

void solve(){

    lli n;
    cin>>n;
    f(i,0,n){

        lli h;
        cin>>h;
        v.pb(h);
    }
    memset(st,0,sizeof(st));
    buildTree(1,0,n-1);
    lli q;
    cin>>q;
    while(q--){

        lli l,r;
        cin>>l>>r;
        cout<<query(1,0,n-1,l,r)<<endl;
    }
}

signed main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}