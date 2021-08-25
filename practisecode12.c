#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r,g,b;
        scanf("%d %d %d",&r,&g,&b);
        if(r>255||g>255||b>255||r<0||g<0||b<0)
        {
            printf("INVALID\n");
            continue;
        }
        printf("#");
        printf("%.2x",r);
        printf("%.2x",g);
        printf("%.2x",b);
        printf("\n");
    }
    return 0;
}
