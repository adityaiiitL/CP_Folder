#include<stdio.h>
#include<math.h>
int min_no(int a[],int n){
    
    if(n==1)return a[0];
    return fmin(a[n-1],min_no(a,n-1));
}
void solve(){

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);  
    printf("%d",min_no(a,n));
}
int main(){

    solve();
    return 0;
}