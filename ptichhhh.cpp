#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int n){
	for(int i=0;i<n;i++)
		cin>>a[i];
}
int check(int a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]!=a[n-1-i])
			return 0;
	}
	return 1;
}

int main(){
	int n;
	cin>>n;
	int a[n+1];
	nhap(a,n);
	cout<<check(a,n);
	return 0;
}

