#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
void solve(){

    string s;
    cin>>s;
    string dir="N";
    li gear=0;
    cout<<"("<<dir<<" | "<<gear<<")";
    for(li i=0;i<s.size();i++){

        string temp;
        temp.assign(dir);
        li imp=gear;
        if(s[i]=='A'){
            if(gear!=5)gear++;
        }
        else if(s[i]=='B'){
            if(gear!=0)gear--;
        }
        else if(s[i]=='R'){

            if(dir=="W")dir="NW";
            else if(dir=="NW")dir="N";
            else if(dir=="N")dir="NE";
            else if(dir=="NE")dir="E";
            else if(dir=="SW")dir="W";
            else if(dir=="E")dir="SE";
            else if(dir=="SE")dir="S";
            else if(dir=="S")dir="SW";
            
        }
        else if(s[i]=='L'){

            if(dir=="W")dir="SW";
            else if(dir=="SW")dir="S";
            else if(dir=="S")dir="SE";
            else if(dir=="SE")dir="E";
            else if(dir=="E")dir="NE";
            else if(dir=="NE")dir="N";
            else if(dir=="N")dir="NW";
            else if(dir=="NW")dir="W";
            
        }
        if(dir==temp&&imp==gear)continue;
        cout<<" => ("<<dir<<" | "<<gear<<")";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}