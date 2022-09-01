#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,i,j,so,dem=0;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			so=sqrt(i*i+j*j);
			if(so*so==i*i+j*j&&so<=n)
				dem++;
		}
	}
	cout<<dem;
	return 0;
}

