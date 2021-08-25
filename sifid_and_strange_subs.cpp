#include<bits/stdc++.h>
using namespace std;
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~Author: Aditya_Agrawal_2002~~//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
#define intmax 2147483647
#define intmin -2147483648
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define ld long double
#define lli long long int
#define all(a) a.begin(),a.end()
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define mp(a,b) make_pair(a,b)
#define pb(k) push_back(k)
#define map map<lli,lli>
#define vec vector<lli>
#define stk stack<lli>
#define endl '\n'

void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}

void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}

// -2 -1 0 0
//  0  1 1 0

// -4 -3 -2 0 1 4 6
//  0  1  1 1 1 3 2 

// -5 -3 0 2 5
//   2 3 2 3

// -3  1  4 10 10 10
//   4  3  6  0  0
//  -4 -3 -2 1 4 9 10
//    1  1  3 3 2 1

void solve(){

    lli n;
    cin>>n;
    vec val(n);
    in(val);
    bool flag=true;
    f(i,0,n-1){

        if(val[i]!=val[i+1]){

            flag=false;
            break;
        }
    }
    if(flag&&val[0]>0){

        cout<<1<<endl;
        return;
    }
    else if(flag&&val[0]<=0){

        cout<<n<<endl;
        return;
    }
    sort(all(val));
    multiset<lli>diff;
    if (n != 1){

        if (abs(val[1] - val[0]) >= val[1]){

            diff.insert(abs(val[1] - val[0]));
            lli count = 2;
            f(i, 2, n){

                diff.insert(abs(val[i] - val[i - 1]));
                if (val[i] <= (*diff.begin()))count++;
                else break;
            }
            cout << count << endl;
        }
        else cout << 1 << endl;
    }
    else cout<<1<<endl;
    // stk s;
    // f(i,0,n)s.push(v[i]);
    // vector<pair<lli,lli>>t;
    // f(i,1,n){

    //     lli temp=v[i]-v[i-1];
    //     t.pb(mp(temp,v[i]));
    // }
    // lli c=0;
    // stable_sort(all(t));
    // auto i=t.begin();
    // while(s.size()!=0){

    //     if(s.top()>(*i).first&&i!=t.end()){

    //         if((*i).second==s.top()){

    //             i++;
    //         }
    //         s.pop();
    //         c++;
    //     }
    //     else break;
    // }
    // if(n==c)cout<<1<<endl;
    // else cout<<n-c<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}