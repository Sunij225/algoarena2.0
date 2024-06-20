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
int n;
vi v;
vii v1;
vi ind;
vii re;
int dp[200001];
int rec(int start,int earn){
  if(start==n){
    return earn;
  }
  if(dp[start]!=-1){
    return earn+dp[start];
  }
  int ans=rec(lower_bound(v.begin(),v.end(),re[ind[start]].ff+1)-v.begin(),earn+re[ind[start]].ss);
  int temp2=rec(start+1,earn);
  ans=max(ans,temp2);
  dp[start]=ans-earn;
  return ans;
}


signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    cin>>n;
    rep(i,0,n){
      int a,b,p;
      cin>>a>>b>>p;
      v1.pb(make_pair(a,i));
      re.pb(make_pair(b,p));
    }
    sort all(v1);
    rep(i,0,n){
      v.pb(v1[i].ff);
      ind.pb(v1[i].ss);
    }
    memset(dp,-1,sizeof(dp));
    cout<<rec(0,0);

  

  

   return 0;
}