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
int ma=INT_MIN;
int dp[100000+1];
map<int ,int>m;
int rec(int i){
    if(i>ma){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    else{
        dp[i]=max(rec(i+2)+i*m[i],rec(i+1));
        return dp[i];
    }

}
signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin>>n;

  for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    m[ele]++;
    ma=max(ma,ele);
    
  }
  memset(dp,-1,sizeof(dp));
    cout<<rec(1)<<endl;

  

   return 0;
}