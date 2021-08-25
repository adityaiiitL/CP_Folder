#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
void solve(){

    li a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    li n0=0,n1=0,n=s.size();
    for(li i=0;i<n;i++){
        if(s[i]=='0')n0++;
        if(s[i]=='1')n1++;
    }
    for(li i=0;i<n/2;i++){

        if(s[i]=='?'){

            if(s[n-i-1]!='?'){

                s[i]=s[n-i-1];
                if(s[i]=='0')n0++;
                else n1++;
            }
            else{

                if(a-n0>b-n1){

                    s[i]='0';
                    s[n-i-1]='0';
                    n0+=2;
                }
                else{

                    s[i]='1';
                    s[n-i-1]='1';
                    n1+=2;
                }
            }
        }
    }
    for(li i=n-1;i>=n/2;i--){

        if(s[i]=='?'){

            if(s[n-i-1]!='?'){

                s[i]=s[n-i-1];
                if(s[i]=='0')n0++;
                else n1++;
            }
            else{

                if(a-n0>b-n1){

                    s[i]='0';
                    s[n-i-1]='0';
                    n0+=2;
                }
                else{
                    s[i]='1';
                    s[n-i-1]='1';
                    n1+=2;
                }
            }
        }
    }
    // Palindrome-Check
    bool flag=true;
    for(li i=0;i<n/2;i++){

        if(s[i]!=s[n-i-1]){
            flag=false;
            break;
        }
    }
    n0=0;
    n1=0;
    for(li i=0;i<n;i++){

        if(s[i]=='0')n0++;
        else n1++;
    }
    if(flag && n0==a && n1==b)cout<<s<<endl;
    else cout<<-1<<endl;
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