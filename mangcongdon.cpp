#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int n,i,j;
	cin>>n;
	vector<int>a(n+1),b(n+1);
	//c[1]=1;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++){
		b[i]=b[i-1]+a[i];
	}
	for(i=1;i<=n;i++)
		cout<<b[i]<<" ";
	return 0;
}

