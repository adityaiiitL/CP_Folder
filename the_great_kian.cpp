#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        long long int h;
        cin>>h;
        v.push_back(h);
    }
    long long int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i+=3)sum1+=v[i];
    for(int i=1;i<n;i+=3)sum2+=v[i];
    for(int i=2;i<n;i+=3)sum3+=v[i];
    cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    return 0;
}