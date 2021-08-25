#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
// void inc_sort(string &s, li i,li j){

//     sort(s.begin()+i,s.begin()+j+1);
// }
// void dec_sort(string &s,li i,li j){

//     sort(s.begin()+i,s.begin()+j+1,greater<char>());
// }
void solve(){

    li n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    while(q--){

        li i,j,k;
        cin>>i>>j>>k;
        if(k==1){
            sort(s.begin()+i-1,s.begin()+j);
        }
        else{
            sort(s.begin()+i-1,s.begin()+j,greater<char>());
        }
        // cout<<s<<endl;
    }
    cout<<s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}