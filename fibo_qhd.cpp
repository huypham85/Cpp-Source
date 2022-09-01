#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
ll n,t;
ll f[10000000]={0};
ll fibo(ll n){
	if(n==0) return 0;
	if(n==1) return 1;
	if(f[n]!=0) return f[n];
	f[n]=fibo(n-1)+ fibo(n-2);
	return f[n];
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
	cin>>t;
	//t=1;
    while(t--){
    	cin>>n;
    	cout<<fibo(n)<<endl;
	}
	return 0;
}

