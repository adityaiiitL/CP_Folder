#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    for(li k=1;k<=t;k++){

        li r,c;
        cin>>r>>c;
        li a[r][c],count=0;
        for(li i=0;i<r;i++){
            for(li j=0;j<c;j++){
                cin>>a[i][j];
            }
        }
        if(r==1){
            for(li i=0;i<c;i++){
                
                if(i==0&&abs(a[0][i+1]-a[0][i])>1){
                    count+=abs(a[0][i+1]-a[0][i])-1;
                    min(a[0][i],a[0][i+1])+=abs(a[0][i+1]-a[0][i])-1;
                }
                else if(i==c-1&&abs(a[0][i-1]-a[0][i])>1){
                    count+=abs(a[0][i-1]-a[0][i])-1;
                    if(a[0][i]<a[0][i-1])a[0][i]+=abs(a[0][i-1]-a[0][i])-1;
                    else a[0][i-1]+=abs(a[0][i-1]-a[0][i])-1;
                }
                else{
                    if(abs(a[0][i]-a[0][i+1])>1){
                        count+=abs(a[0][i]-a[0][i+1])-1;
                        if(a[0][i]<a[0][i+1])a[0][i]+=abs(a[0][i]-a[0][i+1])-1;
                        else a[0][i+1]+=abs(a[0][i]-a[0][i+1])-1;
                    }
                }
            }
        }
        /*for(li i=0;i<r;i++){
            for(li j=0;j<c;j++){
                

            }
        }*/
        cout<<"Case #"<<k<<": "<<count<<endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
    cin>>t;long long int l=1;
    while(t--)
    {
        long long int r,c;
        cin>>r>>c;
        int a[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }long long int count=0;long long int count1=0;long long int count2=0;
        for(int m=0;m<r;m++)
        {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c-1;j++)
            {
                if(a[i][j]!=a[i][j+1])
                {count1++;count2++;
                count+=abs(a[i][j]-a[i][j+1])-1;
                if(abs(a[i][j]-a[i][j+1])-1>0)
                {
                    if(a[i][j]>a[i][j+1])
                    a[i][j+1]+=abs(a[i][j]-a[i][j+1])-1;
                    else
                    a[i][j]+=abs(a[i][j]-a[i][j+1])-1;
                }
                }
                
            }
        }
        }

        
       for(int m=0;m<c;m++)
       {
        for(int j=0;j<c;j++)
        {
            for(int i=0;i<r-1;i++)
            {
                if(a[i][j]!=a[i+1][j])
                {
                count+=abs(a[i][j]-a[i+1][j])-1;
                if(abs(a[i][j]-a[i+1][j])-1>0)
                {count1++;
                    if(a[i][j]>a[i+1][j])
                    a[i+1][j]+=abs(a[i][j]-a[i+1][j])-1;
                    else
                    a[i][j]+=abs(a[i][j]-a[i+1][j])-1;
                }

                }
            }
        }
       }
        
        while(count1!=0)
        {
            for(int i=0;i<r;i++)
        {
            for(int j=0;j<c-1;j++)
            {
                if(a[i][j]!=a[i][j+1])
                {
                count+=abs(a[i][j]-a[i][j+1])-1;
                if(abs(a[i][j]-a[i][j+1])-1>0)
                {count1++;
                    if(a[i][j]>a[i][j+1])
                    a[i][j+1]+=abs(a[i][j]-a[i][j+1])-1;
                    else
                    a[i][j]+=abs(a[i][j]-a[i][j+1])-1;
                }
                }
                
            }
        }
        for(int j=0;j<c;j++)
        {
            for(int i=0;i<r-1;i++)
            {
                if(a[i][j]!=a[i+1][j])
                {
                count+=abs(a[i][j]-a[i+1][j])-1;
                if(abs(a[i][j]-a[i+1][j])-1>0)
                {count2++;
                    if(a[i][j]>a[i+1][j])
                    a[i+1][j]+=abs(a[i][j]-a[i+1][j])-1;
                    else
                    a[i][j]+=abs(a[i][j]-a[i+1][j])-1;
                }

                }
            }
        }
        count1--;
        }
       

        
        cout<<"Case #"<<l<<": "<<count<<endl;l++;
     }
        
}
*/