#include<bits/stdc++.h>
using namespace std;
int prime[]={2,3,5,7,11,13,17,19,23,29,31};
long long res=1e18;
int n;

void Try(int i, long long ans, long long SoUoc){
	if(SoUoc>n) return;
	if(SoUoc==n) res=min(res, ans);
	for(int j=1;;j++){
		if(ans*prime[i]>res) break;
		ans*=prime[i];
		Try(i+1, ans, SoUoc*(j+1));
	}
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		res=1e18;
		Try(0,1,1);
		cout<<res<<endl;
	}
	return 0;
}

