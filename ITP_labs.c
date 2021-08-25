#include<stdio.h>
#include<math.h>
#define lli long long int
lli gcd(lli a,lli b){
   int c=a<b?a:b;
   int ans=0;
   for(int i=1;i<=c;i++){
        if(a%i==0 && b%i==0)ans=i;
   }
   return ans;
}
lli no_of_digits(lli n){
 lli ans=0;
  while(n>0){
    ans++;
    n/=10;
  }
  return ans;
}

int main(){
int t;
scanf("%d",&t);
while (t--)
{
    lli n,dec=0,num=0,deno=1,common;
    scanf("%lld.%lld",&n,&dec);
    num=n;
    if(dec==0){
        deno=1;
    }
    else{
        deno=pow(10,no_of_digits(dec));
        common= gcd(dec,deno);
        dec/=common;
        deno/=common;
    }
    lli imp=(deno*n)+dec;
    printf("[%lld/%lld] [%lld %lld/%lld]\n",imp,deno,n,dec,deno);
}
return 0;
}