#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int i, n, dem=1;
	cin >> n;
	vector<int>vt;
	vt.resize(n);
	for(i=1; i<=n; i++)
		cin >> vt[i];
	if(n%2==0)
		dem=0;
	else{
		for(i=1; i<=(n/2); i++){
			if(vt[i]!=vt[n-i+1]){
				dem=0;
				break;
			}
		}
	}
		if(dem==1)
			printf("YES");
		else if(dem==0)
			printf("NO");
		
	return 0;
}
