#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){

        lli n,m,count=0;
        cin>>n>>m;
        vector<lli>arr(n+1,1);
        for(lli i=2;i<=n;i++){

            lli k=m%i;
            count+=arr[k];
            for(lli j=k;j<=n;j+=i){

                arr[j]++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}