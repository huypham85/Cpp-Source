#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
ll res[1003][1003];
ll t, n, k;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    //res[0][0]=1;
    //res[0][1]
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(i==j||j==0) res[i][j]=1;
            else{
                res[i][j]=res[i-1][j-1]+res[i-1][j];
                //cout<<res[i-1][j]<<" "<<res[i-1][j]<<endl;
            }
            res[i][j]%mod;
        }
    }
    //cout<<res[-1][0]<<" "<<res[-1][1]<<endl;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<res[n][k]<<endl;
    }
    return 0;
}