#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
void solve(){

    string s;
    cin>>s;
    bool flag=true,flag1=true;
    for(li i=0;i<s.size();i++){

        if(s[i]!='a'){
            flag1=false;
            break;
        }
    }
    if(flag1){

        cout<<"NO"<<endl;
        return;
    }
    for(li i=0;i<s.size()/2;i++){

        if(s[i]!=s[s.size()-i-1]){
            flag=false;
            break;
        }
        // if(s[i]!='a'){
        //     flag1=false;
        //     break;
        // }
    }
    if(flag){
        cout<<"YES"<<endl;
        cout<<s+'a'<<endl;
        return;
    }
    string ans1='a'+s,ans2=s+'a';
    // cout<<ans1<<endl;
    // cout<<ans2<<endl;
    bool f1=true,f2=true;
    for(li i=0;i<ans2.size()/2;i++){

        if(ans1[i]!=ans1[ans1.size()-i-1]){
            f1=false;
            break;
        }
        if(ans2[i]!=ans2[ans2.size()-i-1]){
            f2=false;
            break;
        }
    }
    if(f1){
        cout<<"YES"<<endl;
        cout<<ans2<<endl;
        return;
    }
    else if(f2){
        cout<<"YES"<<endl;
        cout<<ans1<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        cout<<ans1<<endl;
        return;
    }

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