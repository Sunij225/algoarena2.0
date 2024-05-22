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
    int n,x;
    cin>>n>>x;
    vii v;
    rep(i,0,n){
        pii p;
        cin>>p.first;
        p.ss=i;
        v.pb(p);
    }
    sort all(v);
    int i=0,j=n-1,flag=false;
    while(i<j){
        if(v[n-1].ff+v[n-2].ff<x){
            break;
        }
        if(v[i].ff+v[j].ff==x){
            flag=true;
            break;
        }
        else if(v[i].ff+v[j].ff>x){
            j--;
        }
        else{
            i++;
        }
    }
    if(i==j){
        flag=false;
    }
    if(flag){
        cout<<v[i].ss+1<<" "<<v[j].ss+1<<endl;
    }
    else{
        cout<<"IMPOSSIBLE";
    }

    return 0;
}