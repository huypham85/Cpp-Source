#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j=0,dem=0,dem1;
	cin>>n;
	for(i=1;i<=n;i++){
		j++;
			if(j%5==0){
				dem+=2;
				i+=3;
				j=0;
			}
	}
	cout<<dem<<" ";
	if(n<2){
		dem1=n;
		cout<<dem1;
	}
	else{
		dem1=2;
		j=0;
		for(i=3;i<=n;i++){
			j++;
			if(j%5==0){
				dem1+=2;
				i+=3;
				j=0;
			}
		}
		cout<<dem1;
	}
	return 0;
}

