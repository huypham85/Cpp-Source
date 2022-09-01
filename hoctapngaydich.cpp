#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	long long n, k;
	cin>>n>>k;
	long long a[n+1];
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a+1, a+n);
	long long ans=a[0];
	for(int i = 1; i < n; i++){
		if(i <= n-1-k)	
			ans-= a[i];
		else{
			ans += a[i];
		}
	}
	cout<<ans;
	return 0;
}

