#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n;
    cin>>n;
    vector<li>v(n);
    for(li i=0;i<n;i++)cin>>v[i];
    for(li i=0;i<n;i++){

        li j=i+1,count1=0;
        if(i!=n-1){
            while(v[j]<=v[i]){

                if(j==n)break;
                if(v[j]==v[i])count1++;
                j++;
            }
        }
        j=i-1;
        li count2=0;
        if(i!=0){
            while(v[j]<=v[i]){

                if(j==-1)break;
                if(v[j]==v[i])count2++;
                j--;
            }

        }
        cout<<count1+count2<<" ";
    }
    cout<<"\n";
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