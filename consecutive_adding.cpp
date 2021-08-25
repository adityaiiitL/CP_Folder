#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
bool check(int n,int x)
{
    int a=n,counter=0;
    while(n>1)
    {
        n/=x;
        counter++;
    }
    if(counter==log(a)/log(x))return 1;
    return 0;
}
void solve()
{
    li r,c,x;
    cin>>r>>c>>x;
    li a[r][c],b[r][c];
    li sum_a=0,sum_b=0;
    for(li i=0;i<r;i++)
    {
        for(li j=0;j<c;j++)
        {
            cin>>a[i][j];
            sum_a+=a[i][j];
        }
    }
    for(li i=0;i<r;i++)
    {
        for(li j=0;j<c;j++)
        {
            cin>>b[i][j];
            sum_b+=b[i][j];
        }
    }
    li temp=abs(sum_a-sum_b);
    if(check(temp,x))cout<<"Yes\n";
    else cout<<"No\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
/*
    int p=1,k;
    for(int i=0;i<=n;i++)
    {
        p*=i%k;
    }
    cout<<p<<endl;
*/