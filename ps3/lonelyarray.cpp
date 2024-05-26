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
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vi v(n);
    int max=0;
    rep(i,0,n){
        cin>>v[i];
        if(v[i]>max){
            max=v[i];
        }
    }
    int a=-1,b=-1;
    int ans=0;

    rep(i,0,log2(max)+1){
        a=-1,b=-1;
        int min=INT_MIN;
        rep(j,0,n){
            bitset<32> bi(v[j]);
            if(bi[i]==1){
                a=b;
                b=j;
                if(min<b-a){
                min=b-a;
            }
            }
        }
        if(b!=-1){
            if(min<n-b){
            min=n-b;
        }

        }
        if(ans<min){
            ans=min;
        }

    }
    a=0;
    rep(i,0,n){
        if(v[i]==0){
            a++;
        }
    }
    if(a==n){
        ans=1;
    }
    cout<<ans<<endl;

  }

   return 0;
}