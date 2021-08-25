#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int curr_len=0,max_len=0,i=0;
    while(1)
    {
        if(a[i]==' '||a[i]=='\0')
        {
            if(curr_len>max_len)
            {
                max_len=curr_len;
                
            }
            curr_len=0;
        }
        else curr_len++;
        if(a[i]=='\0')break;
        i++;
    }
    cout<<max_len<<endl;
    return 0;
}