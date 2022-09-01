#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,i,j,dem=0;
	while(1){
		cin>>n;
		dem=0;
		if(n==0) break;
		while(n!=1){
			if(n%2==0){
				n/=2;
				dem++;
			}
			else{
				n=n*3+1;
				dem++;
			}
		}
		cout<<dem+1<<endl;
	}
	
	return 0;
}

