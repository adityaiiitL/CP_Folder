#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<int>v(26,0);
    for(int i=0;i<s.size();i++)
    {
        v[s[i]-'a']++;
    }
    char ans;
    for(int i=25;i>=0;i--)
    {
        if(v[i]>0)
        {
            for(int j=1;j<=v[i];j++)
            {
                ans='a'+i;
                cout<<ans;
            }
            break;
        }
    }
    return 0;
}