#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,res=0;
int a[1004];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    int dp[1004];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        dp[i]=0;
        for(int j=i-1;j>=0;j--){
            if(a[i]>=a[j]) dp[i]=max(dp[i], dp[j]);
        }
        dp[i]++;
        res=max(res,dp[i]);
        //cout<<res<<endl;
    }
    cout<<res;
    return 0;
}