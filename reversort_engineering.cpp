#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t,k=0;
    cin>>t;
    test:
    while(t--){

        k++;
        li n,c;
        cin>>n>>c;
        if(c<n-1||c>=n*(n+1)/2){
            cout<<"Case #"<<k<<": IMPOSSIBLE\n";
            continue;
        }
        else if(n-c==1){

            cout<<"Case #"<<k<<": ";
            for(li i=1;i<=n;i++)cout<<i<<" ";
            cout<<"\n";
            continue;
        }
        //cout<<"Case #"<<k<<": ";
        vector<li>v(n);
        for(li i=0;i<n;i++)v[i]=i+1;
        for(li imp=0;imp<=n-2;imp++)
        {
            for(li temp=2;temp<=n;temp++){

                reverse(v.begin()+imp,v.begin()+temp);
                lli sum=0;
                vector<li>v1(n);
                for(li i=0;i<n;i++)v1[i]=v[i];
                for(lli i=0;i<n-1;i++){

                    lli min_vi=v[i],vi=i;
                    for(lli j=i;j<n;j++){

                        if(v[j]<min_vi){

                            min_vi=v[j];
                            vi=j;
                        }
                    }
                    reverse(v.begin()+i,v.begin()+vi+1);
                    sum+=vi-i+1;
                }
                if(sum==c){
                    cout<<"Case #"<<k<<": ";
                    for(li i=0;i<n;i++)cout<<v1[i]<<" ";
                    cout<<"\n";
                    goto test;
                }
            }
        }
        cout<<"Case #"<<k<<": IMPOSSIBLE\n";
    }
    return 0;
}