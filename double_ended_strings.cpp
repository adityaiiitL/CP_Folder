#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    string a,b;
    cin>>a>>b;
    li n1=a.size(),n2=b.size(),count=0,max_count=0;
    for(li i=0;i<n1;i++){

        for(li j=0;j<n2;j++){

            if(a[i]==b[j]){

                count=1;
                for(li k1=i+1,k2=j+1;k1<n1,k2<n2;k1++,k2++){

                    if(a[k1]==b[k2])count++;
                    else break;
                }
                max_count=max(count,max_count);
            }
        }
    }
    cout<<n1+n2-2*max_count<<"\n";
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