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
int n,m,b,mod,ans=0;
vi a(501);
int dp[501][501];
signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin>>n>>m>>b>>mod;
  rep(i,1,n+1){
    cin>>a[i];
  }
  dp[0][0]=1;
  for(int i=1;i<=n;i++){
    for(int j=0;j<m;j++){
      for(int k=0;k<=b;k++){
        if(a[i]+k<=b){
          dp[j+1][a[i]+k]+=dp[j][k];
          dp[j+1][a[i]+k]%=mod;

        }
      }
    }
  }
  for(int i=0;i<=b;i++){
    ans+=dp[m][i];
    ans%=mod;
  }
  cout<<ans<<endl;
 
   return 0;
}