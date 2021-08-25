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
lli getMid(lli s,lli e){
    return (s+e)/2;
}
lli getSumUtil(lli *st,lli ss,lli se,lli qs,lli qe,lli si){

    if(qs<=ss&&qe>=se)return st[si];
    if(se<qs||ss>qe)return 0;
    lli mid=getMid(ss,se);
    return getSumUtil(st,ss,mid,qs,qe,2*si+1)+getSumUtil(st,mid+1,se,qs,qe,2*si+2);
}
void updateValueUtil(lli *st,lli ss,lli se,lli i,lli diff,lli si){

    if(i<ss||i>se){
        return;
    }
    st[si]=st[si]+diff;
    if(se!=ss){
        lli mid=getMid(ss,se);
        updateValueUtil(st,ss,mid,i,diff,2*si+1);
        updateValueUtil(st,mid+1,se,i,diff,2*si+2);
    }
}
void updateValue(lli arr[],lli *st,lli n,lli i,lli new_val){

    if(i<0||i>n-1)return;
    lli diff=new_val-arr[i];
    arr[i]=new_val;
    updateValueUtil(st,0,n-1,i,diff,0);
}
lli getSum(lli *st,lli n,lli qs,lli qe){

    if(qs<0||qe>n-1||qs>qe){
        return -1;
    }
    return getSumUtil(st,0,n-1,qs,qe,0);
}
lli constructSTUtil(lli arr[],lli ss,lli se,lli *st,lli si){
    if(ss==se){
        st[si]=arr[ss];
        return arr[ss];
    }
    lli mid=getMid(ss,se);
    st[si]=constructSTUtil(arr,ss,mid,st,si*2+1)+constructSTUtil(arr,mid+1,se,st,si*2+2);
    return st[si];
}
lli *constructST(lli arr[],lli n){

    lli x=(lli)(ceil(log2(n)));
    lli max_size=2*(lli)pow(2,x)-1;
    lli *st=new lli[max_size];
    constructSTUtil(arr,0,n-1,st,0);
    return st;
}
void solve(){
    
    lli n,q;
    cin>>n>>q;
    lli arr[n];
    for(lli i=0;i<n;i++){

        lli h;
        cin>>h;
        arr[i]=(h*h)%mdl;
    }
    lli *st=constructST(arr,n);
    while(q--){

        lli temp,l,r;
        cin>>temp>>l>>r;
        if(temp==1){
            cout<<(getSum(st,n,l-1,r-1))%mdl<<endl;
        }
        else if(temp==2){
            updateValue(arr,st,n,l-1,r*r);
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