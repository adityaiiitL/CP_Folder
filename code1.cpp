#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n,p=1,k;
    cin>>n>>k;
    for(lli i=1;i<=n;i++)
    {
        p*=i;
        p%=k;
    }
   /*
   for(lli i=1;i<=507;i++)
   {
       p*=n;
       p%=k;
   }
   */
    cout<<p<<endl;
    return 0;
}