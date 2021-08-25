#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t[3];
    cin>>n;
    for(int i=0;i<3;i++)cin>>t[i];
    for(int i=0;i<n;i++)
    {
        int no_of_ing;
        cin>>no_of_ing;
        string s[no_of_ing];
        for(int i=0;i<no_of_ing;i++)cin>>s[i];
    }
    int count_teams=0,i=0;
    while(n>0)
    {
        n-=(i+2)*t[i];
        i++;
        count_teams++;
    }
    cout<<count_teams<<endl;
    
    return 0;
}