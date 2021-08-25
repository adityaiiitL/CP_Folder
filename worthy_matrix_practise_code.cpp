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

    li n,m,k;
        cin>>n>>m>>k;
        li A[n+1][m+1];
        memset(A,0,sizeof(A));
        for(li i=1;i<=n;i++){

            for(li j=1;j<=m;j++){

                cin>>A[i][j];
            }
        }
        for(li i=1;i<=n;i++){
            for(li j=1;j<=m;j++)A[i][j]+=A[i][j-1];
        }
        for(li j=1;j<=m;j++){
            for(li i=1;i<=n;i++)A[i][j]+=A[i-1][j];
        }
        li ans=0;
        for(li side=1;side<=n;side++){

            for(li i=1;i<=n-side+1;i++){

                li low=1,high=m-side+1,mid,p,flag=0;
                while(low<=high){

                    mid=(low+high)/2;
                    li sum=A[i+side-1][mid+side-1]-A[i+side-1][mid-1]-A[i-1][mid+side-1]+A[i-1][mid-1];
                    if(sum>=k*side*side){

                        high=mid-1;
                        p=mid;
                        flag=1;
                    }
                    else low=mid+1;
                }
                if(flag==1){
                    ans+=(m-side-p+2);
                }
            }
        }
        cout<<ans<<endl;
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