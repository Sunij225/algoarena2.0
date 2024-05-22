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
  vi v(1e6,0);
  int n;
  cin>>n;
  v[1]=1;
  int max=0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(max<x){
        max=x;
    }
    v[x]++;
  }
  int ans=0;
  for(int j=max;j>0;j--){
    ans=0;
        for(int i=j;i<=max;i+=j){
            ans+=v[i];
            if(ans>=2){
                break;
            }
        }
    
    if(ans>=2){
                cout<<j<<endl;
                break;
            }
  }

   return 0;
}
