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
void solve(){
    
    lli p,q;
    cin>>p>>q;
    lli a=p,b=q;
    lli count=0;
    if(p==0&&q==0){
        cout<<0<<endl;
        return;
    }
    if(p==1&&q==1){
        cout<<2<<endl;
        return;
    }
    if(p==2&&q==1){
        cout<<3<<endl;
        return;
    }
    if(p==1&&q==2){
        cout<<3<<endl;
        return;
    }
    if(p==2&&q==2){
        cout<<4<<endl;
        return;
    }
    if(p==0||q==0){
        if(q==1||p==1){
            cout<<1<<endl;
            return;
        }
        else{
            cout<<2<<endl;
            return;
        }
    }
    if(p>2&&q>2){

    if(p>q){

        while(q){
            q/=2;
            count++;
        }
        cout<<count+2<<endl;
    }
    else if(p<=q){

        while(p){
            p/=2;
            count++;
        }
        cout<<count+2<<endl;
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