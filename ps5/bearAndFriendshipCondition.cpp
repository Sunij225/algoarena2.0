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
bool c[150001];
vector <vector<int>> v(150001);
void check(int i,int &edge ,int & ver){
    if(c[i]){
        return;
    }
    ver++;
    c[i]=true;
    for(auto j:v[i]){
        edge++;
        check(j,edge,ver);
    }
    return;
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
  bool flag=true;
    rep(i,1,n+1){
        if(c[i]){
            continue;
        }
        int edge=0,ver=0;
        check(i,edge,ver);
        if(edge==(ver*(ver-1))){

        }
        else{
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
  
  
  return 0;
}