#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n+1][m+1];
        int f[n+1][m+1];
        for(int i=0; i<n;i++){
            for(int j=0; j<m;j++) cin>>a[i][j];
        }
        memset(f, 0,sizeof(f));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0&&j==0) f[i][j]=a[i][j];
                else if(i==0) f[i][j]=a[i][j]+f[i][j-1];
                else if(j==0) f[i][j]=a[i][j]+f[i-1][j];
                else f[i][j]=a[i][j]+min(f[i-1][j-1],min(f[i-1][j],f[i][j-1]));
            }
        }
        cout<<f[n-1][m-1]<<endl;
    }
    return 0;
}