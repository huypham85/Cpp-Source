#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll mod = 1e9+7;
ll n, k;
ll f[1003][1003];
void ToHop(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(i==j||j==0) f[i][j]=1;
            else f[i][j]= f[i-1][j]+f[i-1][j-1];
            f[i][j]%=mod;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    ToHop();
    while(t--){
        cin>>n>>k;
        cout<<f[n][k]<<endl;
    }
    return 0;
}