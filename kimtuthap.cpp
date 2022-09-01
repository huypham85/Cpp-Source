#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,i,j,s=0;
	vector<long long>vt; 
	cin>>n;
	for(i=1;i<=1000;i++){
		for(j=1;j<=i;j++){
			s+=j;
		}
		vt.push_back(s);
	}
	for(i=0;i<vt.size();i++){
		if(n==vt[i]) cout<<i+1;
		else if(vt[i]< n && n<vt[i+1])
			cout<<i+1;
	}
	return 0;
}

