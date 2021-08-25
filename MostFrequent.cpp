#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        m[h]++;
    }
    int max_freq=0,max_freq_char=0;
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(max_freq<(*i).second)
        {
            max_freq=(*i).second;
            max_freq_char=(*i).first;
        }
    }
    cout<<max_freq_char<<endl;
    return 0;
}