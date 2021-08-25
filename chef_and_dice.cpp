#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
void solve(){

    lli n;
    cin>>n;
    if(n%4==0){

        cout<<(n/2)*12+(n/2)*10+16<<endl;
    }
    else if(n<5){

        if(n==1)cout<<20<<endl;
        else if(n==2)cout<<36<<endl;
        else if(n==3)cout<<51<<endl;
    }
    else{

        lli temp=n-n%4;
        lli imp=(temp/2)*12+(temp/2)*10+16;
        if(n%4==1){

            cout<<imp+16<<endl;
        }
        else if(n%4==2){

            cout<<imp+28<<endl;
        }
        else if(n%4==3){

            cout<<imp+39<<endl;
        }
    }
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