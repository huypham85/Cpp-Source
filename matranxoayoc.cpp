#include<bits/stdc++.h>
using namespace std;
int a[100][100],n,j,i,gt,d,hang,cot,t,x,y;

void tao(){
	d=0;gt=1;hang=n-1;cot=n-1;
	while(d<=n/2){
		for(i=d;i<=cot;i++) a[d][i]=gt++;
		for(i=d+1;i<=hang;i++) a[i][cot]=gt++;
		for(i=cot-1;i>=d;i--) a[hang][i]=gt++;
		for(i=hang-1;i>d;i--) a[i][d]=gt++;	
		d++; hang--; cot--;
	}
}

int main(){
	cin>>t;
	for(int k=1;k<=t;k++){
		cin>>n>>x>>y;
		tao();
		cout<<a[x-1][y-1]<<endl;
	}
	return 0;
}

