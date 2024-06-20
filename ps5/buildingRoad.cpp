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
vector<vi> v(100001);
bool vis[100001];
int n,m;
void dfs(int ver){
    if(vis[ver]){
        return;
    }
    vis[ver]=true;
    for(auto i:v[ver]){
        dfs(i);
    }
    return;

}

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin>>n>>m;
  rep(i,0,m){
    int v1,v2;
    cin>>v1>>v2;
    v[v1].pb(v2);
    v[v2].pb(v1);
  }
  vi a;
  int ans=-1;
  rep(i,1,n+1){
    if(!vis[i]){
        a.pb(i);
        ans++;
        dfs(i);
    }
  }
  cout<<ans<<endl;
  rep(i,0,a.size()-1){
    cout<<a[i]<<" "<<a[i+1]<<endl;
  }
  


   return 0;
}