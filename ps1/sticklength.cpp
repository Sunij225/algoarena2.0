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

const int N = 1e3 + 2 , MOD = 1e9 + 7;

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int n;
    cin>>n;
    vi v(n);
    input(v);
    sort all(v);
    int ans=0;
    if(n%2){
        int temp=n/2;
        
        rep(i,0,n){
            ans+=abs(v[i]-v[temp]);
        }
    }
    else{
        int temp1=n/2;
        int temp2=temp1-1;
        int a=0,b=0;
        for(int i=0;i<n;i++){
            a+=abs(v[i]-v[temp1]);
        }
        for(int i=0;i<n;i++){
            b+=abs(v[i]-v[temp2]);
        }
        if(a<b){
            ans=a;
        }
        else{
            ans=b;
        }
    }
    cout<<ans;
    return 0;
}