#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long int k;
        cin>>n>>k;
        set<long double>s;
        long double mx=0,mex=0;
        for(int i=0;i<n;i++)
        {
            /*
                0 1 1 1         3
                0 1 1 1 2       2
                0 1 1 1 2 3     1  
                0 1 1 1 2 3 4   0
                -------------------
                0 1 2 3 4 --> 5 i.e.(s.size + k)
            */
            long double h;
            cin>>h;
            s.insert(h);
            mx=max(mx,h);
        }
        for(auto i=s.begin();i!=s.end();i++)
        {
            if(mex==(*i))mex++;
        }
        long int b=ceil((mx+mex)/2);
        if(k==0)cout<<s.size()<<endl;
        else
        {
            if(b>mx||b==mex)cout<<s.size()+k<<endl;
            else
            {
                s.insert(b);
                cout<<s.size()<<endl;
            }
        }
    }
    return 0;
}