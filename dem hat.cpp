#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int n,dem=0;
	vector<int> vt;
	cin >> n;
	vt.resize(n);
	for(int i=0;i<n;i++)
		cin >> vt[i];
	for(int i=0;i<n-1;i++){
		if(vt[i]!=vt[i+1])
			dem++;
	}
	cout << dem;
	return 0;
}

