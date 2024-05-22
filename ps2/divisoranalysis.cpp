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
int pow(int a,int b){
  if(b==0){
    return 1;
  }
  int temp=pow(a,b/2);
  temp%=MOD;
  if(b%2==1){
    return ((temp*temp)%MOD*a)%MOD;
  }
  else{
    return (temp*temp)%MOD;
 
  }
}
 
signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  int num=1,sum=1,product=1;
  vii v;
  int t1=1,t2=n;
  while(n--){
    num%=MOD;
    sum%=MOD;
    product%=MOD;
    int x,t;
    cin>>x>>t;
    t1*=(t+1);
    pii p;
    p.ff=x;
    p.ss=t;
    v.pb(p);
 
    num*=(t+1);
    sum*=(pow(x,t+1)-1)/(x-1);
    num%=MOD;
    sum%=MOD;
  }
  for(int i=0;i<t2;i++){
    product%=MOD;
    int temp=t1/(v[i].ss+1);
    v[i].ss=v[i].ss*(v[i].ss+1)/2;
    v[i].ss*=temp;
    product*=(pow(v[i].ff,v[i].ss));
    product%=MOD;
  }
  cout<<num<<" "<<sum<<" "<<product;
 
   return 0;
