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
int fac(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fac(n-1);
}

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vi v(n+1,0);
    for(int i=1;i<n+1;i++){
        v[i]=v[i-1]+s[i-1]-'0';
    }
    int a=0;
    for(int i=0;i<=n;i++){
        v[i]=v[i]-i;
    }
    int ans=0;
    map<int,int>m;
    rep(i,0,n+1){
        m[v[i]]++;
    }
    for(auto it:m){
        ans+=(it.ss)*(it.ss-1)/2;
    }
    cout<<ans<<endl;
  }

   return 0;
}