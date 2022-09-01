#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int b[n+1];
		int index=0;
		for(int i=0;i<n;i+=2){
			b[i]=a[index++];
		}
		for(int i=1;i<n;i+=2){
			b[i]=a[index++];
		}
		for(int i=0;i<n;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}