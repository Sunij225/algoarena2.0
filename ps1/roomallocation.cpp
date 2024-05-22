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
    int n,n1;
    cin>>n;
    n1=n;
    vii a(n);
    vi a1(n);
    multiset <pii> b;
    int temp=1;
    vi ans(n);
    int i=0;
    while(n--){
      cin>>a[i].ff>>a1[i];
      a[i].ss=i;

      i++;
      
    }

    sort all(a);
    i=0;
    while(n1--){
      pii p,t;
      t.ff=a[i].ff;
      t.ss=0;
      p.ff=a1[a[i].ss];
      b.insert(t);
      if(b.find(t)==b.begin()){
        b.erase(t);
        p.ss=temp;
        b.insert(p);
        ans[a[i].ss]=temp;
        i++;
        temp++;
      }
      else{
        auto it=b.find(t);
        it--;
        b.erase(t);
        ans[a[i].ss]=(*it).ss;
        b.erase(it);
        p.ss=ans[a[i].ss];
        i++;
        b.insert(p);
      }
    }
    cout<<temp-1<<endl;
    rep(i,0,ans.size()){
      cout<<ans[i]<<" ";
    }
    
    

    

    return 0;
}