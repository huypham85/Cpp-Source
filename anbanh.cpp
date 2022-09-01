#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, k;
	cin>>n>>k;
	if((n%(k+1))%2==0||n%(k+1)==0){
		if(n==k) cout<<"Taro";
		else
		cout<<"Hanako";
	}
	else 
		cout<<"Taro";
	return 0;
}

