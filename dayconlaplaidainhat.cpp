#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        string s;
        cin>>s;
        int f[n+1][n+1];
        // tim xau con chung dai nhat cua xau s va chinh xau s
        memset(f, 0, sizeof(f));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==s[j-1]&&i!=j){
                    f[i][j] = f[i-1][j-1]+1;
                }
                else f[i][j]= max(f[i-1][j], f[i][j-1]);
            }
        }
        cout<<f[n][n]<<endl;
    }
    return 0;
}