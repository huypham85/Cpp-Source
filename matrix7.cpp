#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n;
int a[1000][1000];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin>>a[i][j];
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
            }
            if(i%2==1){
                for(int j=n-1;j>=0;j--) cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}