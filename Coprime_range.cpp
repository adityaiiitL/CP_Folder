#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    int t;cin>>t;
    while(t--)
    {
        int r,l;
        cin>>r>>l;
        cout<<1299827<<endl;
    }
    */
   for(int i=pow(10,6);i<2*pow(10,9);i++)
   {
       int j;
       for(j=2;j<i;j++)
       {
           if(i%j==0)break;
       }
        if(j==i)
        {
            cout<<i<<endl;
            break;
        }
   }

    return 0;
}