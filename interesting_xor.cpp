#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        vector<int>v(32),v1(32);
        int i=0;
        while(n>0)
        {
            v[i]=n%2;
            n/=2;
            i++;
        }
        int k=0;
        for(int j=i-1;j>=0;j--)
        {
            v1[k]=v[j];
            k++;
        }
        vector<int>v2(i),v3(i);
        for(int a=0;a<i;a++)
        {
            if(a==0)
            {
                v2[a]=1;
                v3[a]=0;
                continue;
            }
            if(v1[a]==1)
            {
                v2[a]=0;
                v3[a]=1;
            }
            else
            {
                v2[a]=1;
                v3[a]=1;
            }
        }
        /*for(int a=0;a<i;a++)cout<<v1[a];
        cout<<endl;
        for(int a=0;a<i;a++)cout<<v2[a];
        cout<<endl;
        for(int a=0;a<i;a++)cout<<v3[a];*/
        long int sum1=0,sum2=0;
        for(int a=0;a<i;a++)
        {
            sum1+=v2[a]*pow(2,i-a-1);
            sum2+=v3[a]*pow(2,i-a-1);
        }
        cout<<sum1*sum2<<endl;
    }
    return 0;
}