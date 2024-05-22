// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n),a1(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>a1[i];
    }
    sort(a.begin(),a.end());
    sort(a1.begin(),a1.end());
    bool flag=true;
    int j=0,ans=0,i=0;
    while(i<n&&j<m){
        if(a1[j]<=a[i]+k&&a1[j]>=a[i]-k){
            i++;
            j++;
            ans++;
        }
        else{
            if(a1[j]>a[i]+k){
                i++;
            }
            else{
                j++;
            }
        }
    }
    cout<<ans;
    return 0;
}