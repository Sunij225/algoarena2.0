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
    string s;
    cin>>s;
    if(n==2){
        if(s[0]<s[1]){
            cout<<"YES"<<endl<<2<<endl;
            cout<<s[0]<<" "<<s[1]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"YES"<<endl<<2<<endl;
        cout<<s[0]<<" ";
        for(int i=1;i<n;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
  }

   return 0;
}