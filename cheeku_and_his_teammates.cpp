#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
lli sq_rt(lli x){

    if (x == 0 || x == 1)
    return x;
    int start = 1, end = x, ans;
    while (start <= end)
    {        
        int mid = (start + end) / 2;
        if (mid*mid == x)
            return mid;
        if (mid*mid < x)
        {
            start = mid + 1;
            ans = mid;
        }
        else end = mid-1;        
    }
    return ans;
}
lli func(lli a,lli b){

    // int countSquares(int a, int b)

    return (floor(sq_rt(b)) - ceil(sq_rt(a)) + 1);
 
}
void solve(){
    

    lli n;
    scanf("%lld",&n);
    cout<<n-func(1,n)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}