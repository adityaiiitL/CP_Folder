#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
   int n,i,r,s=0;
   scanf("%d",&n);
   i=n;
   while(i!=0)
   {
       r=n%10;
       s=s*10 +r;
       i=n/10;
   }
   if(s==n)
   printf("palindrome");
   else
   printf("not palindrome");

    return 0;
}