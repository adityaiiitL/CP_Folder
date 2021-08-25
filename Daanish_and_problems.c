#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int a[10];
        for(int i=0;i<10;i++)scanf("%ld",&a[i]);
        long int k;
        scanf("%ld",&k);
        //we start checking from backwards...
        for(int i=9;i>=0;i--)
        {
            //we reduce k at each step by the element in array
            k-=a[i];
            if(k==0)
            {
                //if the k becomes 0 at that moment we check for that index where the element is not zero
                for(int j=i-1;j>=0;j--)
                {
                    if(a[j]!=0)
                    {
                        printf("%d\n",j+1);
                        break;
                    }
                }
                break;
            }
            //if k becomes negative we print the present index
            else if(k<0)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}