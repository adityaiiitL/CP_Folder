#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double l,r,s;
        cin>>l>>r>>s;
        int min=ceil(l/s);
        int max=floor(r/s);
        if(min>max)cout<<"-1"<<" "<<"-1"<<endl;
        else cout<<min<<" "<<max<<endl;
    }
    return 0;
}