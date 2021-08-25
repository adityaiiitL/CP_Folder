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
lli countdigit(lli n){
    
    return floor(log10(n)+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    for(lli z=1;z<=t;z++){

        lli n;
        cin>>n;
        string v[n];
        for(lli i=0;i<n;i++)cin>>v[i];
        lli count=0;
        for(lli i=1;i<n;i++){

            if(v[i].size()<v[i-1].size()){

                lli k=countdigit(v[i-1].length());
                lli l=countdigit(v[i].length());
                for(li j=1;j<=k-l;j++){
                    v[i]=v[i]+"0";
                }
                count+=k-l;
                string greater;
                for(li j=0;j<v[i].size();j++){
                    li temp1=v[i][j]-'0',temp2=v[i][j]-'0';
                    if(temp1>temp2){
                        greater=v[i];
                        break;
                    }
                    else{
                        greater=v[i-1];
                        break;
                    }
                }
                if(v[i].size()>v[i-1].size())break;
                if(greater==v[i])break;
                if(v[i][0]>v[i-1][0])break;
                else count++;
            }
            else if(v[i].size()==v[i-1].size()){

                string great="-1";
                for(li j1=0;j1<v[i].size();j1++){

                    li temp1=v[i][j1]-'0',temp2=v[i-1][j1]-'0';
                    if(temp1>temp2){
                        great.assign(v[i]);
                        break;
                    }
                    else{
                        great.assign(v[i-1]);
                        break;
                    }
                }
                if(great==v[i-1]){
                    
                lli k=countdigit(v[i-1].length());
                lli l=countdigit(v[i].length());
                for(li j=1;j<=k-l;j++){
                    v[i]=v[i]+"0";
                }
                count+=k-l;
                string greater;
                for(li j=0;j<v[i].size();j++){
                    li temp1=v[i][j]-'0',temp2=v[i][j]-'0';
                    if(temp1>temp2){
                        greater=v[i];
                        break;
                    }
                    else{
                        greater=v[i-1];
                        break;
                    }
                }
                if(v[i].size()>v[i-1].size())break;
                if(greater==v[i])break;
                if(v[i][0]>v[i-1][0])break;
                else count++;
                }
                else continue;
            }
            else if(v[i]==v[i-1]){

                v[i]=v[i]+"0";
                count++;
            }
        }
        for(lli i=0;i<n;i++)cout<<v[i]<<" ";
        cout<<"Case #"<<z<<": "<<count<<endl;
    }
    return 0;
}