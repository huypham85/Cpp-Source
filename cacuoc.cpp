#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,s;
	int a[6]={0};
	cin>>x>>s;
	for(int i=1;i<=5;i++){
		cin>>a[i];
		cout<<a[i]-(x*s)<<" ";
	}
	
	return 0;
}

