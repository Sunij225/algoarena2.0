#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb(x) push_back(x)
#define vvi vector<vector<int>>
#define vii vector<pair<int , int>>
#define pii pair<int , int>
#define vc vector<char>
#define rep(i , a , b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define all(x) ((x).begin() , (x).end())
#define input(x) for(auto &i : x)cin >> i

const int N = 1e3 + 2 , MOD = 1e9 + 7;

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int n;
    cin>>n;
    vii v;
    for(int i=0;i<n;i++){
        pii p;
        cin>>p.ff;
        p.ss=i;
        v.pb(p);
    }
    sort all(v);
    int a=0;
    rep(i,1,n){
        if(v[i].ss<v[i-1].ss){
            a++;
        }
    }
    cout<<a+1;
    return  0;
}