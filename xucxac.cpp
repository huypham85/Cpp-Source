#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,i,mid=0,dem1=0,dem2=0;
	cin>>a>>b;
	if(a==b) mid=0;
	else if((b-a+1)%2==1) mid=1;
	else mid=0;
	for(i=1;i<=6;i++){
		if(abs(i-a)<abs(i-b))
			dem1++;
		else if(abs(i-a)>abs(i-b))
			dem2++;
	}
	cout<<dem1<<" "<<mid<<" "<<dem2;
	return 0;
}

