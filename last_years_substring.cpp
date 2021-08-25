#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n;
    cin>>n;
    string s;
    cin>>s;
    /*
    if(s[n-4]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0'){
        cout<<"YES\n";
        return;
    }
    if(s[0]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0'){
        cout<<"YES\n";
        return;
    }
    if(s[0]=='2'&&s[1]=='0'&&s[n-2]=='2'&&s[n-1]=='0'){
        cout<<"YES\n";
        return;
    }
    if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[n-1]=='0'){
        cout<<"YES\n";
        return;
    }
    if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0'){
        cout<<"YES\n";
        return;
    }
    else cout<<"NO\n";
    */
   bool flag=false;
   li temp=0,count=0;
   for(li i=0;i<n;i++){

       if(count==4)break;
       if(s[i]=='2'&&flag==false&&temp==0){

           flag=true;
           temp++;
        //    cout<<s[i];
           count++;
       }
       if(s[i]=='0'&&flag==true&&temp>0){

           flag=false;
           temp--;
        //    cout<<s[i];
           count++;
       }
   }
   if(temp==0&&count==4)cout<<"Yes\n";
   else cout<<"No\n";
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