#include<bits/stdc++.h>
using namespace std;
int ktnt(long long i){
	if(i<2) return 0;
	for(int j=2;j<=sqrt(i);j++){
		if(i%j==0)
			return 0;
	}
	return 1;
}
int tong(long long i){
	long long s=0;
	while(i>0){
		int sotach=i%10;
		if(ktnt(sotach)==0) return 0;
		else{
			s+=sotach;
			i/=10;
		}
	}
	if(ktnt(s)==1) return 1;
	else return 0;
}
int main(){
	long long a, b,dem=0;
	cin>>a>>b;
	if(a<=b){
		for(int i=a;i<=b;i++){
			if(ktnt(i)==1&&tong(i)==1) dem++;
			else continue;
		}
		cout<<dem;
	}
	else{
		for(int i=b;i<=a;i++){
			if(ktnt(i)==1&&tong(i)==1) dem++;
			else continue;
		}
		cout<<dem;
	}
	return 0;
}

