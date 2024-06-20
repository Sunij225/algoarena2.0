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
int dp[501][126000];
int sum;
int rec(int t,int first,int sec){
    if(t==0){
        return 1;
    }
    if(dp[t][first]!=-1){
        return dp[t][first];
    }
    int ans=0;
    if(first+t<=sum&&sec+t<=sum){
        ans+=rec(t-1,first+t,sec);
        ans%=MOD;
        ans+=rec(t-1,first,sec+t);
        ans%=MOD;
    }
    else if(sec+t<=sum){
        ans+=rec(t-1,first,sec+t);
        ans%=MOD;
    }
    else{
        ans+=rec(t-1,first+t,sec);
        ans%=MOD;
    }
    dp[t][first]=ans;
    return ans;

}

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin>>n;
  sum=(n*(n+1))/2;

  if(sum&1){
    cout<<0;
    return 0;
  }
  sum/=2;
  memset(dp,-1,sizeof(dp));
  cout<<rec(n-1,n,0);




   return 0;
}