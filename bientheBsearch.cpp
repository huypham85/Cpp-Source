#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int *a, int low, int high, int value){
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]<=value){
			ans=mid;
			low =mid+1;
		}
		else high =mid-1;
	}
	return ans;
}
int main(){
	int n , m;
	cin>>n>>m;
	int a[n+1];
	int b[n+1];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	sort(a , a+n);
	for(int i=0;i<m;i++){
		if(b[i]<a[0])
			cout<<"0"<<endl;
		else{
			int result=BinarySearch(a, 0, n-1, b[i])+1;
			cout<<result<<endl;
		}
	}
	return 0;
}

