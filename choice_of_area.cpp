#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define fo return

struct area
{
    lli a,b;
    area(lli a,lli b):a(a),b(b)
    {}
};
lli func(lli A,lli B,lli last, area X,area Y,area Z){
    if(A<0 or B<0)fo 0;
    if(last==1){
        lli x=1+func(A+Y.a,B+Y.b,2,X,Y,Z);
        lli y=1+func(A+Z.a,B+Z.b,3,X,Y,Z);
        fo max(x,y);
    }   
    if(last==2){
        lli x=1+func(A+X.a,B+X.b,1,X,Y,Z);
        lli y=1+func(A+Z.a,B+Z.b,3,X,Y,Z);
        fo max(x,y);
    }
    if(last==3){
        lli x=1+func(A+Y.a,B+Y.b,2,X,Y,Z);
        lli y=1+func(A+X.a,B+X.b,1,X,Y,Z);
        fo max(x,y);
    }
}
void solve()
{
    area X(3, 2);
    area Y(-5, -10);
    area Z(-20, 5);
    lli A,B;
    cin>>A>>B;
    lli ans=func(A+X.a,B+X.b,1,X,Y,Z);
    ans=max(ans,func(A+Y.a,B+Y.b,2,X,Y,Z));
    ans=max(ans,func(A+Z.a,B+Z.b,3,X,Y,Z));
    cout<<ans<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();
}