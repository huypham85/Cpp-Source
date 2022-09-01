#include<bits/stdc++.h>
using namespace std;
long long gt(long long x){
	long long p=1;
	for(int j=1;j<=x;j++){
		p*=j;
	}
	return p;
}
long long tachso(long long i){
	long long x=i, s=0;
	while(x>0){
		s+=gt(x%10);
		x/=10;
	}
	return s;
}
void solve(long long a, long long b){
	long long dem=0;
	if(a<=b){
		dem=0;
		for(long long i=a; i<=b;i++){
			if(tachso(i)==i)
				cout<<i<<" ";
			else{
				dem++;
				continue;
			}
		}
		if(dem==(b-a+1)) cout<<"0";
	}
	else{
		dem=0;
		for(long long i=b; i<=a;i++){
			if(tachso(i)==i)
				cout<<i<<" ";
			else{
				dem++;
				continue;
			}
		}
		if(dem==(a-b+1)) cout<<"0";
	}
}
int main(){
	long long a, b;
	cin>>a>>b;
	solve(a,b);
	return 0;
}

