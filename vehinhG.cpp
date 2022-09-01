#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            int dem=0;
            for(int k=1;k<=n+n;k++){
                if(k%2==1){
                    cout<<k;
                    dem++;
                }
                if(dem==i) break;
            }
            cout<<endl;
        }
        if(i%2==0){
            int dem=0;
            for(int k=1;k<=n+n;k++){
                if(k%2==0){
                    cout<<k;
                    dem++;
                }
                if(dem==i) break;
            }
            cout<<endl;
        }
    }
    
    return 0;
}