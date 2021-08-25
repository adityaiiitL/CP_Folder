#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define f(i,k,n) for(lli i=k;i<n;i++)
void solve(){

    char a[3][3];
    lli n_X=0,n_O=0,n__=0;
    f(i,0,3){
        f(j,0,3){

            cin>>a[i][j];
            if(a[i][j]=='X')n_X++;
            if(a[i][j]=='O')n_O++;
            if(a[i][j]=='_')n__++;
        }
    }
    if((n_X-n_O)>1||n_O>n_X){
        cout<<3<<endl;
        return;
    }
    lli check=0;bool flag=false;lli checkx=0,checky=0;
    if(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X'){
        flag=true;
        check++;
        checkx++;
    }
    if(a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O'){
        flag=true;
        check++;
        checky++;
    }
    if(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X'){
        flag=true;
        check++;
        checkx++;
    }
    if(a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O'){
        flag=true;
        check++;
        checky++;
    }
    if(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X'){
        flag=true;
        check++;
        checkx++;
    }
    if(a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O'){
        flag=true;
        check++;
        checky++;
    }
    if(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X'){
        flag=true;
        check++;
        checkx++;
    }
    if(a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O'){
        flag=true;
        check++;
        checky++;
    }
    if(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X'){
        flag=true;
        check++;
        checkx++;
    }
    if(a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O'){
        flag=true;
        check++;
        checky++;
    }
    if(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X'){
        flag=true;
        check++;
        checkx++;
    }
    if(a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O'){
        flag=true;
        check++;
        checky++;
    }
    if(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X'){
        flag=true;
        check++;
        checkx++;
    }
    if(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O'){
        flag=true;
        check++;
        checky++;
    }
    if(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X'){
        flag=true;
        check++;
        checkx++;
    }
    if(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O'){
        flag=true;
        check++;
        checky++;
    }
    if(n__==0&&check==0){
        cout<<1<<endl;
        return;
    }
    if(check>1){
        
        if((checkx==2&&(n_X-n_O)==1)||(checky==2&&(n_O-n_X)==1)){
            cout<<1<<endl;
            return;
        }
        else{
            cout<<3<<endl;
            return;
        }
    }
    // OOX
    // XX_
    // OOX
    if(flag&&check==1){
        
        if(checkx==1){

            if(n_X>n_O)cout<<1<<endl;
            else cout<<3<<endl;
        }
        if(checky==1){

            if(n_O==n_X)cout<<1<<endl;
            else cout<<3<<endl;
        }
        return;
    }
    if(n__>0&&check==0){
        cout<<2<<endl;
    }
}
int main(){

    long int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}