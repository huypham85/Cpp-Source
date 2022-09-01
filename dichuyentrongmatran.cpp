#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[1000][1000];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int f[n+1][m+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                f[i][j]=0;
            }
        }
        f[1][1]=1;
        /*
        1 2 3 
        4 5 6
        so cach den phan tu 5 = so cach den phan tu 2 + so cach den phan tu 4
        */
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i==1&&j==1) continue;
                f[i][j] = f[i-1][j]+f[i][j-1];
            }
        }
        cout<<f[n][m]<<endl;
    }
    return 0;
}