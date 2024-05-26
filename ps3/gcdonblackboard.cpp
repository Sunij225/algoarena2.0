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
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  vi v(n);
  input(v);
  int a=v[0];
  vi l(n),r(n);
    rep(i,0,n){
        a=gcd(v[i],a);
        l[i]=a;
    }
    a=v[n-1];
    for(int j=n-1;j>=0;j--){
        a=gcd(v[j],a);
        r[j]=a;
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(i==0){
            if(max<r[i+1]){
                max=r[i+1];
            }
        }
        else if(i==n-1){
            if(max<l[i-1]){
                max=l[i-1];
            }
        }
        else{
            int temp=gcd(l[i-1],r[i+1]);
            if(max<temp){
                max=temp;
            }
        }
    }
    cout<<max;


   return 0;
}