#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int n,k,i,j;
	cin>>n>>k;
	vector<int>vt;
	int a[n+1];
	int tanso[100006]={0};
	for(i=0;i<n;i++){
		cin>>a[i];
		tanso[a[i]]++;
	}
	for(i=0;i<100006;i++){
		if(tanso[i]!=0){
			for(j=1;j<=tanso[a[i]];j++){
				vt.push_back(i);
			}
		}
	}
	cout<<vt[k];
	return 0;
}

