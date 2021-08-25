#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n,m;
    cin>>n>>m;
    vector<li>v1(n),v2(m);
    for(li i=0;i<n;i++)cin>>v1[i];
    for(li i=0;i<m;i++)cin>>v2[i];
    /*------------------------------------
    Brute-Force approach:

    map<li,li>m1;
    if(n>m){
        li count=0;
        for(li i=0;i<n;i++){
            for(li j=0;j<m;j++){

                li temp=v1[i]+v2[j];
                m1[temp]++;
                if(m1[temp]==1){

                    cout<<i<<" "<<j<<endl;
                    ++count;
                }
                if(count==n+m-1)return;
            }
        }
    }
    else{
        li count=0;
         for(li i=0;i<m;i++){
            for(li j=0;j<n;j++){

                li temp=v2[i]+v1[j];
                m1[temp]++;
                if(m1[temp]==1){

                    cout<<j<<" "<<i<<endl;
                    count++;
                }
                if(count==n+m-1)return;
            }
        }
    }
    */
    //-------------------------------------
    // Optimised Approach:

    li a_max=v1[0],b_min=v2[0],ai=0,bi=0;
    for(li i=0;i<n;i++){

        if(a_max<v1[i]){
            a_max=v1[i];
            ai=i;
        }
    }
    for(li i=0;i<m;i++){

        if(b_min>v2[i]){
            b_min=v2[i];
            bi=i;
        }
    }
    for(li i=0;i<m;i++){
        
        cout<<ai<<" "<<i<<endl;
    }
    for(li i=0;i<n;i++){
        
        if(i!=ai){
            cout<<i<<" "<<bi<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}