#include<bits/stdc++.h>
using namespace std;

int main(){
	long long r1,r2,l1,l2,k;
	cin>>l1>>r1>>l2>>r2>>k;
	long long T=min(r1,r2)-max(l1,l2)+1;
	if(T<=0){
		cout<<0;
		return 0;
	}
	if(k>=max(l1,l2)&&k<=min(r1,r2))
		 T--;
	cout<<T;
	return 0;
}

