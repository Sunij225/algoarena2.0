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
  int n,x;
  cin>>n>>x;
  si s;
  s.insert(0);
  s.insert(n);
  msi m;
  m.insert(n);
  while(x--){
    int a;
    cin>>a;
    s.insert(a);
    auto pt=s.find(a);
    auto pt1=pt,pt2=pt;
    auto ini=--pt1,fi=++pt2;
    pt1=pt;
    int temp=*fi-*ini;
    m.erase(m.find(temp));
    int temp1=*pt-*ini,temp2=*fi-*pt;
    m.insert(temp1);
    m.insert(temp2);
    auto ans=--m.end();
    cout<<*(ans)<<" ";
  }
   return 0;
}