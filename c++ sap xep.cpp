#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int i,j,n;
	cin >> n;
	vector<int> vt;
	vt.resize(n);
	for(i=0;i<n;i++)
		cin >> vt[i];
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(vt[j]<vt[j-1]){
				int tmp =vt[j];
				vt[j]=vt[j-1];
				vt[j-1]=tmp;
			}
		}
	}
	for(i=0;i<n;i++)
		cout<<vt[i]<<endl;
	return 0;
}

