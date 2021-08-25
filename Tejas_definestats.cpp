#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC Optimization ("O3")
#pragma GCC Optimization ("unroll-loops")
#define debug(x) for(auto element:x) {cout<<element<<" ";}cout<<endl
#define rep(i,k,n) for(int i=k;i<n;i++)
#define rept(i,k,n) for(auto i=k;i!=n;++i)
#define drep(i,k,n) for(int i=k;i>=n;i--)
#define all(a) a.begin(),a.end()
#define intmax 2147483647
#define intmin -2147483648
#define mod 1000000007
#define mod2 998244353
#define vi vector<int>
#define ii pair<int,int>
#define iii pair<int,pair<int,int>>
#define pss pair<string,string>
#define pis pair<int,string>
#define ld long double
#define int long long
#define endl "\n"
void solve()
{
    int n;
    char c;
    cin>>n;
    set<char> sc,z;
    string s;
    map<string,set<char>> m;
    rep(i,0,n)
    {
        cin>>s;
        c = s[0];
        s.erase(s.begin());
        if(m.find(s)==m.end()){
            sc.clear();
            sc.insert(c);
            m.insert(make_pair(s,sc));
        }
        else{
            m[s].insert(c);
        }
    }
    /*for(auto x:m){
        cout<<x.first<<" ";
        debug(x.second);
    }*/
    int ans =0;
    rept(it,m.begin(),m.end())
    {
        rept(it2,m.begin(),m.end())
        {
            z.clear();
            if(it==it2) continue; 
            for(char c:(*it).second)
            {
                if((*it2).second.find(c)!=(*it2).second.end())
                {
                    z.insert(c);
                }
            }
            ans += ((it).second.size()-z.size())((*it2).second.size()-z.size());
        }
    }
    cout<<ans<<endl;
}

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}