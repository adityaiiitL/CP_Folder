#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int *p=a; 
    // or int *p=&a[0];
    /* alternate method of taking input :)
    for(int i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
    */
    p=a;
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
        /* (or)
        printf("%d ",*p);
        p++;
        */
    }
    return 0;
}