#include<bits/stdc++.h>
using namespace std;
void out(int *a, int n){
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<" "; 
}

void Try(int *a, int i,int n){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n)
			out(a, n);
		else 
			Try(a, i+1, n);
	}
}

int main(){
	int n;
	cin>>n;
	int a[n+1];
	Try(a, 1, n);
	return 0;
}

