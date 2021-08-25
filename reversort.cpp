#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    for(lli k=1;k<=t;k++){

        lli n;
        cin>>n;
        vector<lli>v(n);
        for(lli i=0;i<n;i++){
            cin>>v[i];
        }
        lli sum=0;
        for(lli i=0;i<n-1;i++){

            lli min_vi=v[i],vi=i;
            for(lli j=i;j<n;j++){

                if(v[j]<min_vi){

                    min_vi=v[j];
                    vi=j;
                }
            }
            reverse(v.begin()+i,v.begin()+vi+1);
            /*for(lli j=i;j<=vi/2;j++){
                swap(v[j],v[vi-j]);
            }*/
            sum+=vi-i+1;
        }
        
        cout<<"Case #"<<k<<": "<<sum<<"\n";
    }
    return 0;
}