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
bool mycompa(string s1,string s2){

    lli count1=0,count2=0;
    for(lli i=0;i<s1.size();i++){
        if(s1[i]=='a')count1++;
    }
    for(lli i=0;i<s2.size();i++){
        if(s2[i]=='a')count2++;
    }
    if(count1>count2)return true;
    return false;
}
bool mycompb(string s1,string s2){

    lli count1=0,count2=0;
    for(lli i=0;i<s1.size();i++){
        if(s1[i]=='b')count1++;
    }
    for(lli i=0;i<s2.size();i++){
        if(s2[i]=='b')count2++;
    }
    if(count1<count2)return true;
    return false;
}
void solve(){
    
    lli n;
    cin>>n;
    string s1[n],s2[n];
    for(lli i=0;i<n;i++){
        cin>>s1[i];
        s2[i]=s1[i];
    }
    sort(s1,s1+n,mycompa);
    sort(s2,s2+n,mycompb);
    string ans1=s1[0],ans2=s2[0];
    for(lli i=1;i<n;i++){
        ans1+=s1[i];
        ans2+=s2[i];
    }
    lli count1=0,count2=0;
    for(lli i=0;i<ans1.size();i++){
        if(ans1[i]=='a'){
            for(lli j=i+1;j<ans1.size();j++){
                if(ans1[j]=='b')count1++;
            }
        }
    }
    for(lli i=0;i<ans2.size();i++){
        if(ans2[i]='a'){
            for(lli j=i+1;j<ans2.size();j++){
                if(ans2[j]=='b')count2++;
            }            
        }
    }
    cout<<max(count1,count2)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve(); 
    return 0;
}