#include <bits/stdc++.h> 
using namespace std; 
int binpow(int a, int b) 
{ 
    int res = 1; 
    while (b) { 
        if (b & 1) res = res * a; 
        a = a * a; 
        b /= 2; 
    } 
    return res; 
}
int find(int x) 
{ 
    if (x == 0) return 0; 
    int p = log2(x); 
    return binpow(2, p + 1) - 1; 
}
string getBinary(int n) 
{ 
    string ans = ""; 
    while (n) { 
        int dig = n % 2; 
        ans += to_string(dig); 
        n /= 2; 
    }
    return ans; 
}
int totalCountDifference(int n) 
{
    string ans = getBinary(n);
    int req = 0; 
    for (int i = 0; i < ans.size(); i++) 
    { 
        if (ans[i] == '1') req += find(binpow(2, i)); 
    } 
    return req; 
} 
int main() 
{  
    int N; 
    cin>>N;
    cout << totalCountDifference(N); 
    return 0; 
}