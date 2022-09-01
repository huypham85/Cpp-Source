#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,m,n,a,b,i,j,dem=0;
	cin>>t;
	for(i=1;i<=t;i++){
		dem=0;
		cin>>m>>n>>a>>b;
		for(j=m;j<=n;j++){
			if(j%a==0||j%b==0)
				dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}

