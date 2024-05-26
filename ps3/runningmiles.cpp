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
#define si set<int>
#define msi multiset<int>

const int N = 1e3 + 2 , MOD = 1e9 + 7;

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vi v(n);
    input(v);
    vi p(n),s(n);
    for(int i=0;i<n;i++){
        p[i]=v[i]+i;
        s[i]=v[i]-i;
    }
    for(int i=1;i<n;i++){
        p[i]=max(p[i],p[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        s[i]=max(s[i],s[i+1]);
    }
    int ans=0;
    for(int i=1;i<n-1;i++){
        ans=max(ans,v[i]+p[i-1]+s[i+1]);
    }
    cout<<ans<<endl;
  }

   return 0;
}