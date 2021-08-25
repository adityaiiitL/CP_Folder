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
void multiply(lli a[3][3],lli b[3][3]){

    lli mul[3][3];
    for(lli i=0;i<3;i++){

        for(lli j=0;j<3;j++){

            mul[i][j]=0;
            for(lli k=0;k<3;k++){

                lli temp=(a[i][k]*b[k][j])%mdl;
                mul[i][j]+=temp;
            }
        }
    }
    for(lli i=0;i<3;i++){
        for(lli j=0;j<3;j++){
            a[i][j]=mul[i][j];
        }
    }
}
lli pow(lli F[3][3],lli n,lli a,lli b,lli c,lli x,lli y,lli z){

    lli M[3][3]={{a,b,c},{1,0,0},{0,1,0}};
    if(n==1)return (z*F[0][0]+y*F[0][1]+x*F[0][2])%mdl;
    pow(F,n/2,a,b,c,x,y,z);
    multiply(F,F);
    if(n%2!=0)multiply(F,M);
    return (z*F[0][0]+y*F[0][1]+x*F[0][2])%mdl;
}
lli func(lli n,lli a,lli b,lli c,lli x,lli y,lli z){

    lli F[3][3]={{a,b,c},{1,0,0},{0,1,0}};
    if(n==0)return x;
    if(n==1)return y;
    if(n==2)return z;
    return pow(F,n-2,a,b,c,x,y,z)%mdl;
}
void solve(){
    
    lli n,a,b,c,x,y,z;
    cin>>n>>a>>b>>c>>x>>y>>z;
    cout<<func(n,a,b,c,x,y,z)%mdl<<endl;
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