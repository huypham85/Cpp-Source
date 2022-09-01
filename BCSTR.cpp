#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[1005][1005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    t=1;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        int res=0;
        memset(f,0,sizeof(f));
        for(int i=1;i<=s1.size();i++){
            for(int j=1;j<=s2.size();j++){
                if(s1[i-1]==s2[j-1]) f[i][j]=f[i-1][j-1]+1;
                else f[i][j]= max(f[i-1][j], f[i][j-1]);// xau con chung dai nhat thi tinh de phan tu thu i cua s1 va phan tu thu j cua s2
                res=max(res, f[i][j]);
            }
        }
        cout<<res;
    }  
    return 0;
}