#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    for(lli k=1;k<=t;k++){

        lli x,y;
        string s;
        cin>>x>>y>>s;
        if(s[0]=='?'&&s[1]=='?'){
            for(li i=1;i<s.size();i++){

                if(s[i]!='?'){
                    s[0]=s[i];
                    break;
                }
            }
        }
        else if(s[0]=='?'&&s[1]!='?')s[0]=s[1];
        for(li i=1;i<s.size()-1;i++){

            if((s[i]=='?')&&(s[i-1]=='C')&&(s[i+1]=='C'))s[i]='C';
            else if((s[i]=='?')&&(s[i-1]=='J')&&(s[i+1]=='J'))s[i]='J';
            else if((s[i]=='?')&&(s[i-1]=='C')&&(s[i+1]=='J')){
                if(x<y)s[i]='C';
                else s[i]='J';
            }
            else if((s[i]=='?')&&(s[i-1]=='J')&&(s[i+1]=='C')){
                if(y<x)s[i]='C';
                else s[i]='J';
            }
            else if(s[i]=='?'&&s[i+1]=='?'){
                s[i]=s[i-1];
                s[i+1]=s[i];
            }
        }
        lli sum=0;
        if(s[s.size()-1]=='?')s[s.size()-1]=s[s.size()-2];
        for(lli i=0;i<s.size()-1;i++){

            if((s[i]=='C')&&(s[i+1]=='J'))sum+=x;
            else if((s[i]=='J')&&(s[i+1]=='C'))sum+=y;
        }
        //cout<<s<<"\n";
        cout<<"Case #"<<k<<": "<<sum<<"\n";
    }
    return 0;
}