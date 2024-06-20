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
bool vis[100000];
int cycle=0;
vi arr(100001);
bool flag=true;
vector <vector<int>> v(100001);
void dfs(int ver,int last,int m,int k){
    if(ver==last||last==0){

    }
    else{
        if(vis[ver]){
          if(arr[ver]!=k%2){
            flag=false;
          }
            cycle++;
        }
    }
    if(vis[ver]){
        return;
    }
    vis[ver]=true;
    arr[ver]=k%2;
    for(auto i:v[ver]){
        dfs(i,m,ver,k+1);
    }


}




signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n,e;
  cin>>n>>e;
  rep(i,0,e){
    int v1,v2;
    cin>>v1>>v2;
    v[v1].pb(v2);
    v[v2].pb(v1);
  }
  rep(i,0,n){
    dfs(i+1,0,0,1);
  }
  if(flag){
    rep(i,1,n+1){
    if(arr[i]==0){
      cout<<2<<" ";
    }
    else{
      cout<<1<<" ";
    }
  }
  }
  else{
    cout<<"IMPOSSIBLE";
  }
  
  return 0;
}