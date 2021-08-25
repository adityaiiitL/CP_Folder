#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int d,c,sum1=0,sum2=0;
        cin>>d>>c;
        for(int i=0;i<3;i++)
        {
            int h;cin>>h;
            sum1+=h;
        }
        for(int i=0;i<3;i++)
        {
            int h;cin>>h;
            sum2+=h;
        }
        int total=sum1+sum2+2*d;
        if(sum1>=150&&sum2>=150)
        {
            int total1=sum1+sum2+c;
            if(total>total1)cout<<"YES\n";
            else cout<<"NO\n";
        }
        else
        {
            if(sum1<150&&sum2<150)cout<<"NO\n";
            else
            {
                int total1=sum1+sum2+d+c;
                if(total>total1)cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
    return 0;
}