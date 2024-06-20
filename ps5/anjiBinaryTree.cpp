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
string s;
int n;
vector <pair<int,int>> v(300001);
int rec(int level,int change){
    if(v[level].ff==0&&v[level].ss==0){
        return change;
    }
    int ans=INT_MAX;
    if(v[level].ff==0){
        if(s[level-1]=='R'){
            ans=min(ans,rec(v[level].ss,change));
        }
        else{
            ans=min(ans,rec(v[level].ss,change+1));
        }
    }
    else if(v[level].ss==0){
        if(s[level-1]=='L'){
            ans=min(ans,rec(v[level].ff,change));
        }
        else{
            ans=min(ans,rec(v[level].ff,change+1));
        }
    }
    else{
        if(s[level-1]=='R'){
            ans=min(rec(v[level].ff,change+1),rec(v[level].ss,change));
        }
        else if(s[level-1]=='L'){
            ans=min(rec(v[level].ss,change+1),rec(v[level].ff,change));
        }
        else{
            ans=min(rec(v[level].ff,change+1),rec(v[level].ss,change+1));
        }
    }
    return ans;
}


signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    cin>>n;
    cin>>s;
    rep(i,1,n+1){
        int l,r;
        cin>>l>>r;
        v[i]=(make_pair(l,r));
    }
    cout<<rec(1,0)<<endl;
    v.clear();
  }

   return 0;
}