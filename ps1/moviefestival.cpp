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
    vi a(n);
    vii b;
    rep(i,0,n){
        cin>>a[i];
        pii p;
        cin>>p.ff;
        p.ss=i;
        b.pb(p);
    }
    sort all(b);
    int ans=1;
    int temp=b[0].ff;
    rep(i,1,n){
        if(a[b[i].ss]>=temp){
            temp=b[i].ff;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}