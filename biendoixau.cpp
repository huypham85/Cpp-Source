#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int f[101][101]={0};
        int n=s1.size();
        int m=s2.size();
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0){
                    f[i][j]=i+j;
                }
                else if(s1[i-1]==s2[j-1]){
                    f[i][j]=f[i-1][j-1];
                }
                else{
                    f[i][j]=min(f[i-1][j-1],min(f[i-1][j],f[i][j-1]))+1;
                }
            }
        }
        cout<<f[n][m]<<endl;
    }
    return 0;
}