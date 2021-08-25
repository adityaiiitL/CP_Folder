#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n,m,K;
    cin>>n>>m>>K;
    li a[n][m],count=0;
    for(li i=0;i<n;i++){
        for(li j=0;j<m;j++){
            
            cin>>a[i][j];
        }
    }
    li x=min(n,m),temp=1;
    while(temp<=x){

        for(li i=0;i<n;i++){

            querry:
            if(i==n)break;
            for(li j=0;j<m;j++){

                li sum=0;
                if(j+temp>m||i+temp>n)break;
                for(li q=i;q<i+temp;q++){
                    
                    for(li k=j;k<j+temp;k++)sum+=a[q][k];
                }
                li avg=sum/(temp*temp);
                if(avg>=K){

                    count+=m-j-(temp-1);
                    // cout<<count<<" "<<temp<<" "<<sum<<" "<<i<<" "<<j<<endl;
                    i++;
                    goto querry;
                }
                else continue;
            }
        }
        temp++;
    }
    cout<<count<<endl;
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