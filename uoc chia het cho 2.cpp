#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	long long t,n,i,j,dem=0;
	cin>>t;
	for(j=1;j<=t;j++){
		dem=0;
		cin >>n;
		vector<long long>vt;
		vt.push_back(n);
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				if(i*i==n){
					vt.push_back(i);
				}
				else{
				vt.push_back(i);
				vt.push_back(n/i);
				}
			}
		}
		for(i=0;i<vt.size();i++){
			if(vt[i]%2==0)
			dem++;
		}
		cout << dem<<endl;
	}
	return 0;
}

