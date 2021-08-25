#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    li count=1,counter=0;
    map<li,char>m;
    for(li i=0;i<n;i++){
        
        if(s[i]=='*'){
            m[i]=s[i];
            counter++;
        }
    }
    if(counter==1){
        cout<<1<<"\n";
        return;
    }
    count=2;
    auto i=m.begin();
    auto it=m.end();
    it--;
    li a=(*i).first;
    (*i).second='x';

    for(;i!=m.end();i++){

        if(i==it){

            if((*i).first-a>k)count++;
            else break;
        }
        else if((*i).first-a>k){

            i--;
            a=(*i).first;
            count++;
        }
    }
    cout<<count<<"\n";
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}