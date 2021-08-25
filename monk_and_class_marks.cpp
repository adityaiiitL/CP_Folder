#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
// #define endl '\n'
bool mycomp(pair<string,li>p1,pair<string,li>p2){

    return p1.second>p2.second;
}
void sort(multimap<string,li>&m){

    vector<pair<string,li>>v;
    for(auto i:m){
        v.push_back(i);
    }
    stable_sort(v.begin(),v.end(),mycomp);
    for(auto i:v){

        cout<<i.first<<" "<<i.second<<"\n";
    }
}
void solve(){

    li n;
    cin>>n;
    multimap<string,li>m;
    for(li i=0;i<n;i++){

        string s;
        cin>>s;
        li h;
        cin>>h;
        // m[s]=h;
        pair<string,li>p;
        p.first=s;
        p.second=h;
        m.insert(p);
    }
    sort(m);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}