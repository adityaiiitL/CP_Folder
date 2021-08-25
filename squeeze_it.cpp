#include<bits/stdc++.h>
using namespace std;
// #pragma GCC target ("avx2")
// #pragma GCC optimize ("O3")
// #pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
void solve(){
    
    lli n;
    cin>>n;
    vector<lli>v(n);
    for(lli i=0;i<n;i++)cin>>v[i];
    while(1){

        if(v.size()==1){
            cout<<1<<endl;
            return;
        }
        bool flag=true;
        for(lli i=v.size()-2;i>=0;i--){

            if(v[i]==v[i+1]){

                flag=false;
                lli temp=v[i]+1;
                auto it1=v.begin()+i+1;
                auto it2=v.begin()+i;
                v.erase(it1);
                v.erase(it2);
                v.insert(v.begin()+i,temp);
                // for(lli i=0;i<v.size();i++)cout<<v[i]<<" ";
                // cout<<endl;
            }
        }
        if(flag){     
            cout<<v.size()<<endl;
            return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}