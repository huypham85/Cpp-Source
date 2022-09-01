#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,i,j;
	cin>>n;
	long long a[n+1];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	long long min=a[0];
	long long kq=1000000009;
	for(i=1;i<n;i++){
		if(a[i]-min<kq) kq=a[i]-min;
		if(a[i]>min) min=a[i];
	}
	cout<<kq;
	return 0;
}


