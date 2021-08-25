#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        long double p,a,b,c;
        cin>>p>>a>>b>>c;
        long long int i=ceil(p/a),j=ceil(p/b),k=ceil(p/c);
        long long int min1=a*i-p;
        long long int min2=b*j-p;
        long long int min3=c*k-p;
        if(min1<min2)
        {
            if(min1<min3)cout<<min1<<endl;
            else cout<<min3<<endl;;
        }
        else
        {
            if(min2<min3)cout<<min2<<endl;
            else cout<<min3<<endl;
        }
    }
    return 0;
}