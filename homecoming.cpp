#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
void solve(){

    lli a,b,p;
    cin>>a>>b>>p;
    string s;
    cin>>s;
    map<char,lli>m;
    m['A']=a;
    m['B']=b;
    lli low=0,high=s.size()-1,mid,imp,sum;
    while(low<=high){
        
        mid=(low+high)/2;
        bool flag=false;
        char temp='a';
        sum=0;
        for(lli i=mid;i<s.size();i++){
            if(s[i]!=temp)flag=false;
            if(flag==false){

                if(i!=s.size()-1)sum+=m[s[i]];
                flag=true;
                temp=s[i];
            }
        }
        if(sum<=p)high=mid-1; 
        else low=mid+1;
        if(sum<=p)imp=mid;
    }
    if(sum>p)cout<<imp+1<<"\n";
    else cout<<mid+1<<"\n";
}
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){

        solve();
    }
    return 0;
}