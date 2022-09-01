#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a, a+n);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int ans= a[i]+a[j];
			for(int u=0;u<n;u++){
				if(ans==a[u]&&ans!=a[i]&&ans!=a[j]){
					cout<<a[i]<<" "<<a[j]<<endl;
					break;
				}
			}
		}
	}
	return 0;
}

