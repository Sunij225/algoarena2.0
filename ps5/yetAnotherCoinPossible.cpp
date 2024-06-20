#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n;
        cin>>n;
        long long int m=0,a=0;
        m=n/3;
        a=n%3;
        long long int min1=0,min2=0,temp=0;
        while(temp!=n-a){
            
            if(a>0&&m>=3){
                temp+= 1+3*3;
                m-=3;
                a-=1;
                min1++;
            }
            else if(m>=5){
                temp+=(5*3)*(m/5);
                min1+=m/5;
                m-=5*(m/5);
            }
            else{
                if(m%2==0){
                    temp+= (m/2)*6;
                    min1+=m/2;
                }
                else {
                    temp += m*3;
                    min1+= 1+((m-1)/2);
                }
            }
        }
        min1+=a;
        cout<<min1<<endl;
    }

    return 0;
}