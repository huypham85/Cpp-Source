#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n;
int a[101][101];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0||i==n-1||j==n-1) cout<<a[i][j]<<" ";
                else cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}