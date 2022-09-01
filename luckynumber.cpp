#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,i,j;
	cin>>n;
	long long s=0,gt=1;
	for(i=1;i<=n;i++){
		gt=1;
		for(j=1;j<=i;j++){
			gt*=2;
		}
		s+=gt;
	}
	cout<<s;
	return 0;
}

