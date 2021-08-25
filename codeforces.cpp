#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int px,py;
        cin>>px>>py;
        string s;
        cin>>s;
        int i=0,counterR=0,counterL=0,counterU=0,counterD=0;
        while(i<s.length())
        {
            if(s[i]=='R')counterR++;
            if(s[i]=='L')counterL++;
            if(s[i]=='U')counterU++;
            if(s[i]=='D')counterD++;
            i++;
        }
        if(px>=0&&py>=0)
        {
            if(counterR>=px&&counterU>=py)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(px<=0&&py>=0)
        {
            if(counterL>=abs(px)&&counterU>=py)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(px<=0&&py<=0)
        {
            if(counterL>=abs(px)&&counterD>=abs(py))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(px>=0&&py<=0)
        {
            if(counterR>=px&&counterD>=abs(py))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}