#include<bits/stdc++.h>
using namespace std;
long long BinarySearch(long long *a, long long low, long long high, long long value){
	while(low<=high){
		long long mid=(low+high)/2;
		if(a[mid]==value){
			return a[mid];
		}
		else if(a[mid]>value)
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
int main(){
	long long n, m, i, j, dd=1;
	cin>>n>>m;
	long long a[n+1];
	for(i=0;i<n; i++)
		cin>> a[i];
	sort(a, a+n);
	for(j=0;j<n;j++){
		long long ans=BinarySearch(a, 0, n-1, a[j]+m );
		if(ans!=-1){
			dd=0;
			cout<<a[j]<<" "<<ans;
			return 0;
		}
	}
	if(dd==1) cout<< "-1";
	return 0;
}

