#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;
void sapxep(int n, vector<int> &vt){
	for(int i=0; i<n; i++){
		for(int j=n-1; j>i; j--){
			if(vt[j]<vt[j-1]){
				int tmp =vt[j];
				vt[j]=vt[j-1];
				vt[j-1]=tmp;
			}
		}
	}
}


int main(){
	int n,k, s=0;
	vector<int> vt;
	cin >> n;
	vt.resize(n);
	for(int i=0; i<n; i++){
		cin >> vt[i];
	}
	sapxep(n, vt);
	for(int i=0; i<n; i++){
		if(vt[i]==vt[i+1])
			s++;
		else
			break;
	}
	for(int u = n-2; u>=0; u--){
		if(vt[u] < vt[n-1]){
			cout << vt [k];
			break;
		}
	}
	return 0;
}

