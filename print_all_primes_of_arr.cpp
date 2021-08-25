#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n,arr_max=0;
    cin>>n;
    vector<li>v(n);
    for(li i=0;i<n;i++){

        cin>>v[i];
        arr_max=max(arr_max,v[i]);
    }
    vector<li>v1(arr_max+1,0);
    for(li i=2;i<=arr_max;i++){

        if(v1[i]==0){
            for(li j=i;j<=arr_max;j+=i){
                v1[j]++;
            }
        }
    }
    for(li i=0;i<n;i++){
        cout<<v1[v[i]]<<" ";
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}