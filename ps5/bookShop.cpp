#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i , a , b) for(int i=a;i<b;i++)
signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n,x;
  cin>>n>>x;
  vi price(n+1),page(n+1);
  rep(i,1,n+1){
    cin>>price[i];
  }
  rep(i,1,n+1){
    cin>>page[i];
  }
  vector<vi> dp(n+1,vi(x+1,0));
  for(int i=1;i<=n;i++){
    for(int j=0;j<=x;j++){
 
      dp[i][j]=dp[i-1][j];
      if(j-price[i]>=0){
        dp[i][j]=max(dp[i][j],page[i]+dp[i-1][j-price[i]]);
      }
    }
  }
  cout<<dp[n][x];
 
 
   return 0;
}
