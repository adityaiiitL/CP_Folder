#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)scanf("%d",&p[i]);
    for(int i=0;i<n;i++)printf("%d ",p[i]);
    printf("\n");
    free(p);
    for(int i=0;i<n;i++)printf("%d ",p[i]);
    return 0;
}