#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    /*
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);

    -> Insertion
      -----------
    int k,value;
    scanf("%d %d",&k,&value);
    for(int i=n;i>k;i--)a[i]=a[i-1];
    a[k]=value;
    n++;

    -> Deletion
      ----------
    int k;
    scanf("%d",&k);
    for(int i=k;i<n;i++)a[i]=a[i+1];
    n--;

       Insertion-Sort
   // ---------------
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    */
   //malloc()
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)scanf("%d",&p[i]);
    for(int i=0;i<n;i++)printf("%d ",p[i]);
    //free()
    free(p);
    return 0;
}