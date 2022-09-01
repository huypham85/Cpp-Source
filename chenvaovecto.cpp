#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n, a;
	cin >> n >> a;
	vector<int> vt;
	vt.resize(n+1);
	for(int i=0; i<n; i++)
		cin >> vt[i];
	if(a>=vt[n-1])
		vt.insert(vt.begin()+n, a);
	else if(a<vt[0])
		vt.insert(vt.begin()+0, a);
	else{
		for(int i=n-2; i>=0; i--){
			if(a>=vt[i]){
				vt.insert(vt.begin()+(i+1), a);
				break;
			}
		}
	}
	for(int i=0; i<n+1; i++)
		cout << vt[i] << " ";
	return 0;
}

