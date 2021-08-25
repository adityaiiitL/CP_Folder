#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    lli n,s,k;
    cin>>n>>s>>k;
    set<lli>st;
    vector<lli>v;
    for(lli i=1;i<=k;i++){

        lli h;
        cin>>h;
        st.insert(h);
        v.push_back(h);
    }
    lli min_diff=INT_MAX,right_ans=s;
    for(auto i:st){

        if(right_ans==i)right_ans++;
        if(st.count(right_ans))right_ans++;
    }
    sort(v.begin(),v.end(),greater<lli>());
    lli left_ans=s;
    for(lli i=0;i<k;i++){

        if(left_ans==v[i])left_ans--;
        if(st.count(left_ans))left_ans--;
    }
    /*lli left_ans=s;
    auto i=st.end();
    i--;
    for(;i==st.begin();i--){

        if(left_ans==(*i))left_ans--;
        if(st.count(left_ans))left_ans--;
    }
    */
    if(left_ans<=0)cout<<right_ans-s<<"\n";
    else if(right_ans>n)cout<<s-left_ans<<"\n";
    else cout<<min(right_ans-s,s-left_ans)<<"\n";
    //cout<<right_ans-s<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){

        solve();
    }
    return 0;
}