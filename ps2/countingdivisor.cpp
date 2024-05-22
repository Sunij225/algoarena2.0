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
  vi v(1e6+1,1);
  rep(i,2,1e6+1){
    for(int j=i;j<=1e6;j+=i){
        v[j]++;
    }
  }
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<v[n]<<endl;
    }
 
   return 0;
