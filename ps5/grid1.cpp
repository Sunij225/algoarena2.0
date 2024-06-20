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
char c[1001][1001];
int n,k;
int dp[1001][1001];
int rec(int row,int col){
    if(c[row][col]=='#'){
        return 0;
    }
    if(dp[row][col]!=-1){
        return dp[row][col];
    }
    if(row==n&&col==k){
        return 1;
    }
    int ans=0;
    if(row==n){
        ans+=rec(row,col+1);
        ans%=MOD;
    }
    else if(col==k){
        ans+=rec(row+1,col);
        ans%=MOD;
    }
    else{
        ans+=rec(row+1,col);
        ans%=MOD;
        ans+=rec(row,col+1);
        ans%=MOD;
    }
    dp[row][col]=ans;
    return ans;
}

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin>>n>>k;
  rep(i,1,n+1){
    rep(j,1,k+1){
        cin>>c[i][j];
    }
  }
  memset(dp,-1,sizeof(dp));
  cout<<rec(1,1);

   return 0;
}