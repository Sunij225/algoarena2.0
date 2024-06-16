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
int dp[501][501];
void d(int a,int b){
  for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
      if(i==j){
        dp[i][j]=0;
      }
      else{
        dp[i][j]=MOD;
        for(int k=1;k<=i-1;k++){
          dp[i][j]=min(dp[i-k][j]+dp[k][j]+1,dp[i][j]);
        }
        for(int k=1;k<=j-1;k++){
          dp[i][j]=min(dp[i][j-k]+dp[i][k]+1,dp[i][j]);
        }
      }
    }
  }
  cout<<dp[a][b];
  
}

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a,b;
  cin>>a>>b;
  d(a,b);

   return 0;
}