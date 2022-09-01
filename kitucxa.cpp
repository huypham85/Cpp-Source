#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,dem=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		if(b-a>=2)
			dem++;
	}
	cout<<dem;
	return 0;
}

