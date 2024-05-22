// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    multiset<pair<int,int>>v;
    for(int i=0;i<n;i++){
        pair<int,int> p;
        cin>>p.first;
        p.second=1;
        v.insert(p);
    }
    for(int i=0;i<m;i++){
        pair<int,int> p;
        cin>>p.first;
        p.second=2;
        v.insert(p);
        if(v.find(p)==v.begin()){
            cout<<-1<<endl;
            v.erase(v.find(p));
        }
        else{
            auto it=v.find(p);
            it--;
            cout<<(*it).first<<endl;
            v.erase(v.find(p));
            v.erase(it);
        }
    }
    return 0;
}