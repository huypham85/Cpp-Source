#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j;
	cin>>n;
	int a[n][n];
	int dd=0, value=n*n,hang=n-1,cot=n-1;
	while(dd<=n/2){
		for(i=dd;i<=cot;i++) a[dd][i]=value--;
		for(i=dd+1; i<=hang;i++) a[i][cot]=value--;
		for(i=cot-1;i>=dd;i--) a[hang][i]=value--;
		for(i=hang-1;i>dd;i--) a[i][dd]=value--;
		dd++;
		hang--;
		cot--;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


