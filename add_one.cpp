#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
void solve(){

    string s;
    li m;
    cin>>s>>m;
    li count=0;
    for(li i=1;i<=m;i++){

        for(li i=s.size()-1;i>=0;i--){

            li temp=s[i]-'0';
            temp++;
            s.erase(i,1);
            string x=(char)temp+'0';
            s.insert(i,x);
        }
        count++;
        if(count==m)break;
    }
    cout<<s<<endl;
    cout<<s.size()<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}