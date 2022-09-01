#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,k,max=0,thua=0;
	cin>>m>>n>>k;
	if((m/2)>n) max=n;
	else if(n>=(m/2)) max=m/2;
	thua=(n-max)+(m-max*2);
	if(k<thua)	cout<< max;
	else{
		k=k-thua;
		if(k%3==0)	cout<<(max-(k/3));
		else	cout<<(max-1-(k/3));
	}
	return 0;
}

