#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
// first occurence
li first_occ(li a[],li n,li i,li k){

    if(i==n)return -1;
    if(a[i]==k)return i;
    return first_occ(a,n,i+1,k);
}
// second occurence
li second_occ(li a[],li n,li i,li k){

    if(i==-1)return -1;
    if(a[i]==k)return i;
    return second_occ(a,n,i-1,k);

}
void solve(){

    li n;
    cin>>n;
    li a[n];
    for(li i=0;i<n;i++)cin>>a[i];
    li k;
    cin>>k;
    li first_occurence=first_occ(a,n,0,k);
    cout<<first_occurence<<endl;
    li second_occurence=second_occ(a,n,n-1,k);
    cout<<second_occurence<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}