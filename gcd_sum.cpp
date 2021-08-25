#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
lli summation(string s){

    lli sum=0;
    for(lli i=0;i<s.size();i++){

        char temp=s[i];
        lli imp=temp-'0';
        sum+=imp;
    }
    return sum;
}
void solve(){

    string s;
    cin>>s;
    
    // cout<<sum<<"\n";
    lli temp1;
    while(1){

        temp1=stoll(s);
        if(__gcd(temp1,summation(s))>1){

            cout<<s<<endl;
            return;
        }
        temp1++;
        s=to_string(temp1);
    }
}
int main()
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