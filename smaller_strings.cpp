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


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    for(lli z=1;z<=t;z++){
        
        lli n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        // f(i,0,n){


        // }
        if(n==1){

            if(s[0]-'a'<=k)cout<<"Case #"<<z<<": "<<(s[0]-'a')%mdl<<endl;
            else cout<<"Case #"<<z<<": "<<k%mdl<<endl;
            continue;
        }
        vec ans;
        ans.pb((s[0]-'a'+1)%mdl);
        lli p=ans[0];
        if(n%2==1){

            f(i,1,n/2+1){

                lli x=((ans[i-1]-1)%mdl+mdl)%mdl,y=(s[i]-'a')%mdl;
                // cout<<x*k+y+1<<endl;
                ans.pb(((x*k)%mdl+(y+1)%mdl)%mdl);
            }
            // out(ans);
            string check;
            f(i,0,n/2)check.pb(s[i]);
            check.pb(s[n/2]);
            f(i,0,n/2)check.pb(s[i]);
            reverse(check.begin()+n/2+1,check.end());
            // cout<<check<<endl;
            bool f=true;
            f(i,0,n){

                if(check[i]!=s[i]){

                    if(check[i]-'a'>s[i]-'a'){
                        f=false;
                        break;
                    }
                    else break;
                }
                
            }
            if(check==s)f=false;
            if(f)cout<<"Case #"<<z<<": "<<ans[n/2]%mdl<<endl;
            else cout<<"Case #"<<z<<": "<<((ans[n/2]-1)%mdl+mdl)%mdl<<endl;
        }
        else{

            f(i,1,n/2){

                lli x=((ans[i-1]-1)%mdl+mdl)%mdl,y=(s[i]-'a')%mdl;
                // cout<<x*k+y+1<<endl;
                ans.pb(((x*k)%mdl+(y+1)%mdl)%mdl);
            }
            // out(ans);
            string check;
            f(i,0,n/2)check.pb(s[i]);
            // check.pb(s[n/2]);
            f(i,0,n/2)check.pb(s[i]);
            reverse(check.begin()+n/2,check.end());
            // cout<<check<<endl;
            bool f=true;
            f(i,0,n){

                if(check[i]!=s[i]){

                    if(check[i]-'a'>s[i]-'a'){
                        f=false;
                        break;
                    }
                    else break;
                }
            }
            if(check==s)f=false;
            if(f)cout<<"Case #"<<z<<": "<<(ans[n/2-1])%mdl<<endl;
            else cout<<"Case #"<<z<<": "<<((ans[n/2-1]-1)%mdl+mdl)%mdl<<endl;
            // cout<<"Case #"<<z<<": "<<ans[n/2-1]<<endl;
        }
        // z++;
    }
    return 0;
}