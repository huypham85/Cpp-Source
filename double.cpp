#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;
vector<long long>ans(int(1e6+10),-1);
long long mod=1e9+7;
long long cal(int n){
    if(n==0) return 1;
    if(n==1) return 3;
    if(ans[n]!=-1) return ans[n];
    ans[n]=((6*cal(n-1))%mod-(4*cal(n-2))%mod)%mod;
    return ans[n];
}



int main(){
    fast_io;
    int n;
    cin>>n;
    cout<<cal(n);


    return 0;
}