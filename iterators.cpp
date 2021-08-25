#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key;
    cin>>n>>key;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        v.push_back(input);
    }
    vector<int>::iterator l,h;
    l=lower_bound(v.begin(),v.end(),key);
    h=upper_bound(v.begin(),v.end(),key);
    cout<<l-v.begin()<<" "<<h-v.begin()-1<<" "<<h-l;
    return 0;
}