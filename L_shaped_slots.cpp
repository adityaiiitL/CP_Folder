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
    for(li i=1;i<=t;i++){

        li r,c;
        cin>>r>>c;
        li arr[r][c];
        for(li j=0;j<r;j++){
            for(li k=0;k<c;k++)cin>>arr[j][k];
        }
        li sum_r=0,sum_c=0,count=0;
        for(li j=0;j<r;j++){
            for(li k=0;k<c;k++)
            {
                if(arr[j][k]==1&&arr[j+1][k]==1){
                    li a,b;
                    for(a=j;a<r;a++){
                        if(arr[a][k]==1)sum_r++;
                        else break;
                    }
                    for(b=k;b<c;b++){
                        if(arr[a][b]==1)sum_c++;
                        else break;
                    }
                    if(sum_r>=2*sum_c){
                        while(sum_r>4){
                            sum_r-=2;
                            count++;
                        }
                    }
                }
            }
        }
        cout<<count;
    }
    return 0;
}