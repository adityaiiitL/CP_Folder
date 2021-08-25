#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li n=10000;
    li v1[n+1]={0};
    for(li i=2;i<=n;i++){

        if(v1[i]==0){

            for(li j=i*i;j<=n;j+=i){
                if(v1[j]==0)v1[j]=1;
            }
        }
    }
    for(li i=0;i<n+1;i++)cout<<v1[i];
    return 0;
}