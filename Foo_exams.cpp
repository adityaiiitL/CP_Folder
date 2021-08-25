#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;cin>>t;
    while(t--)
    {
        long long int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        long long int low=0,high=k,mid;
        bool flag=true;
        while(low<=high)
        {
            mid=(low+high)/2;
            if((a*pow(mid,3)+b*pow(mid,2)+c*mid+d)<=k&&(a*pow(mid+1,3)+b*pow(mid+1,2)+c*(mid+1)+d)>k)
            {
                flag=true;
                break;
            }
            if((a*pow(mid,3)+b*pow(mid,2)+c*mid+d)>k)high=mid-1;
            else if((a*pow(mid,3)+b*pow(mid,2)+c*mid+d)<=k&&(a*pow(mid+1,3)+b*pow(mid+1,2)+c*(mid+1)+d)<=k)low=mid+1;
        }
        if(flag)cout<<mid<<endl;
    }
    return 0;
}