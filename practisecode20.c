#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int curr_count1=0,curr_count2=0,max_count=0,flag=0;
    for(int i=1;i<n-1;i+=2)
    {
        if(a[i]>a[i+1]&&a[i]>a[i-1])flag=1;
        else if(a[i]<a[i+1]&&a[i]<a[i-1])flag=0;
        if(a[i]<a[i-1]&&a[i]<a[i+1]&&flag==0)
        {
            curr_count1++;
            max_count=fmax(max_count,curr_count1);
        }
        else if(a[i]>a[i-1]&&a[i]>a[i+1]&&flag==1)
        {
            curr_count2++;
            max_count=fmax(max_count,curr_count2);
        }
        else
        {
            curr_count1=0;
            curr_count2=0;
        }
    }
    printf("%d",2*max_count+1);
    return 0;
}