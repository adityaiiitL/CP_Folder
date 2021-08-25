#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;cin>>test;
    while(test--)
    {
        long long int c;
        cin>>c;
        long double h=sqrt(24*c+1);
        h--;
        h/= 3;
        long long y=ceil(h);
		long long Y=(y)/2;
		long long e=(y)*Y-(Y*(Y-1))/2;
		if(e<c)y++;
        cout<<y<<"\n";
    }
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;cin>>t;
    while(t--) 
    {
        int n;cin>>n;
        if(n==1||n==2)cout<<2<<endl;
        else
        {
            int low=0,high=n,mid;
            bool flag=false;
            while(low<=high)
            {
                mid=(low+high)/2;
                int k=mid/2;
                int k1=(k/2)*(mid+k+2);
                if(k1==n)
                {
                    bool flag=true;
                    break;
                }
                if(k1>n)high=mid-1;
                else low=mid+1;
            }
            if(flag)cout<<mid<<endl;
        }
    }
    return 0;
}*/