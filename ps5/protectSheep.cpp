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
  int n,m;
  cin>>n>>m;
  vii temp;
  char c[n][m];
  rep(i,0,n){
    rep(j,0,m){
        cin>>c[i][j];
        if(c[i][j]=='W'){
            temp.pb(make_pair(i,j));
        }
    }
  }
  bool flag =true;
  for(auto i:temp){
    
        if(c[i.ff-1][i.ss]=='S'&&i.ff>0){
        flag=false;
        break;
    }
    if(c[i.ff][i.ss+1]=='S'&&i.ss<m-1){
        flag=false;
        break;
    }
    if(c[i.ff+1][i.ss]=='S'&&i.ff<n-1){
        flag=false;
        break;
    }
    if(c[i.ff][i.ss-1]=='S'&&i.ss>0){
        flag=false;
        break;
    }
  }
  if(flag){
    cout<<"Yes"<<endl;
    rep(i,0,n){
        rep(j,0,m){
            if(c[i][j]=='.'){
                c[i][j]='D';
            }
            cout<<c[i][j];
        }
        cout<<endl;
    }
  }
  else{
    cout<<"No"<<endl;
  }
  

   return 0;
}