#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    for(lli j=1;j<=t;j++){
        lli n,k,sum=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(lli i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-i-1])sum++;
        }
        cout<<"Case #"<<j<<": "<<abs(k-sum)<<endl;
    }
    return 0;
}