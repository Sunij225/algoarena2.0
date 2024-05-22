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
int rec(int a,int b,int m){
  if(b==0){
    return 1;
  }
  int temp=rec(a,b/2,m);
  temp%=m;
  if(b%2==1){
    return ((temp*temp)%m*a)%m;
  }
  else{
    return (temp*temp)%m;

  }
}

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    int pow=rec(b,c,MOD-1);
    cout<<rec(a,pow,MOD)<<endl;

  }

   return 0;
}