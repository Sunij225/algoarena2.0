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
    string a,b;
    cin>>a>>b;
    vi v(n,0);
    bool flag=true;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            v[i]=1;
            if(b[i]=='C'){
                flag=false;
                break;
            }
        }
    }
    if(!flag){
        cout<<"No"<<endl;
        continue;
    }
    int temp=0,a1=0,a2=0,b1=0,b2=0,c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(v[i]){
            if(a[i]=='A'){
                if(i==n-1){
                    flag=false;
                    break;
                }
            }
            else if(a[i]=='B'){
                if(i==0){
                    flag=false;
                    break;
                }
            }
            temp++;
        }
        if(!v[i]&&a[i]=='C'){
            temp=0;
            if(a2>=a1&&b2>=b1){
                a1=0,a2=0,b1=0,b2=0,c1=0,c2=0;
            }
            else{
                flag=false;
                break;
            }
        }
        if(temp){
            if(a[i]=='A'){
                a1++;
            }
            if(a[i]=='B'){
                b1++;
            }
            if(a[i]=='C'){
                c1++;
            }
            if(b[i]=='A'){
                a2++;
            }
            if(b[i]=='B'){
                b2++;
            }
            if(b[i]=='C'){
                c2++;
            }
        }

    }
    if(a2>=a1&&b2>=b1){
    }
    else{
        flag=false;
        }
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

  }

   return 0;
}