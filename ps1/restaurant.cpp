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
    vii m;
    for(int i=0;i<n;i++){
        pii p,q;
        cin>>p.ff>>q.ff;
        p.ss=1;
        q.ss=-1;
        m.pb(p);
        m.pb(q);
    }
    sort all(m);
    int max=0,temp=0;
    rep(i,0,m.size()){
        temp+=m[i].ss;
        if(temp>max){
            max=temp;
        }
    }
    cout<<max;

    return 0;
}