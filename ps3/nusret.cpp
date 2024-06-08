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
    int n,k;
    cin>>n>>k;
    int max=0,idx=0;
    vi v(n);
    rep(i,0,n){
        cin>>v[i];
        if(max<v[i]){
            max=v[i];
            idx=i;
        }
    }
    int a=idx,b=idx;
    while(a!=-1||b!=n){
        if(a==idx){
            if(a!=0&&b!=n-1){
                if(v[a-1]>=v[a]-k){

                }
                else{
                    v[a-1]=v[a]-k;
                    a--;
                }
                if(v[b+1]>=v[b]-k){

                }
                else{
                    v[b+1]=v[b]-k;
                }
            }
            else if(a==0&&b!=n-1){
                if(v[a]-k<=v[a+1]){

                }
                else{
                    v[a+1]=v[a]-k;
                    a--;
                    b++;
                }
            }
            else if(a!=0&&b==n-1){
                if(v[a-1]>=v[a]-k){

                }
                else{
                    v[a-1]=v[a]-k;
                    a--;
                    b++;
                }
            }
            else{
                a--;
                b++;
            }
        }
        else if(a==0){
            if(v[a+1])
        }
    }

   return 0;
}