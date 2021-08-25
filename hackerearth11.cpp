#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    cin>>s;
    int x=int(s);
    for(int i=0;i<strlen(s);i++)
    {
        putchar(toupper(s[i]));
    }
    return 0;
}