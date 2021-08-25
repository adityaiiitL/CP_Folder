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

    li n;
    cin>>n;
    char a[n][n];
    li i1,i2,j1,j2;
    bool f1=false,f2=false;
    for(li i=0;i<n;i++){
        for(li j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]=='*'&&f1==false){

                i1=i;
                j1=j;
                f1=true;
            }
            else if(a[i][j]=='*'&&f2==false){

                i2=i;
                j2=j;
                f2=true;
            }
        }
    }
    if(i1==i2){
        if(i1==0){
            a[i1+1][j1]='*';
            a[i2+1][j2]='*';
        }
        else{
            a[i1-1][j1]='*';
            a[i2-1][j2]='*';
        }
    }
    else if(j1==j2){

        if(j1==0){
            a[i1][j1+1]='*';
            a[i2][j2+1]='*';
        }
        else{
            a[i1][j1-1]='*';
            a[i2][j2-1]='*';
        }
    }
    else{
            a[i1][j2]='*';
            a[i2][j1]='*';
    }
    for(li i=0;i<n;i++){
        for(li j=0;j<n;j++)cout<<a[i][j];
        cout<<endl;
    }
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