#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
void solve(){

    li n;
    cin>>n;
    vector<li>v(n);
    for(li i=0;i<n;i++)cin>>v[i];
    /*
    Brute-force approach

    li max_h=0;
    for(li i=0;i<n-1;i++){
        li sum=0;
        for(li j=i;j<n;j++){

            if(v[j]>=v[i])sum+=v[i];
            else break;
        }
        max_h=max(sum,max_h);
    }
    cout<<max_h<<"\n";
    */
    // Optimised Solution

    stack<li>s;
    v.push_back(0);
    li ans=0;
    for(li i=0;i<n;i++){

        while(s.size()!=0&&v[i]<v[s.top()]){

            li h=v[s.top()];
            s.pop();
            if(s.size()==0){
                ans=max(ans,h*i);
            }
            else{
                ans=max(ans,h*(i-s.top()-1));
            }
        }
        s.push(i);
    }
    cout<<ans<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}