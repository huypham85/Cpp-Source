#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll f[100];
int t;
char fibo(int n, ll k){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k<=f[n-2]) return fibo(n-2, k);
    return fibo(n-1, k-f[n-2]);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    f[1]=1;
    f[2]=1;
    for(int i=3;i<=93;i++) f[i]=f[i-2]+f[i-1];
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        cout<<fibo(n,k)<<endl;
    }
    return 0;
}