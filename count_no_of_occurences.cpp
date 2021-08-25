#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        v.push_back(h);
        m[h]++;
    }
    int key;cin>>key;
    return 0;
}