#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li x,r,m;
    cin>>x>>r>>m;
    li msec=60*m;
    li rsec=r*60;
    // r*=60;
    li t=msec-rsec+x;
     if(msec<rsec){
	        cout<<"No"<<endl;
	    }
	    else if(msec==rsec && x<rsec){
	        cout<<"No"<<endl;
	    }
	    else if(msec==rsec && x>rsec){
	        cout<<"Yes"<<endl;
	    }
	    else if(t>=rsec){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
    
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