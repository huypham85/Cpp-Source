#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int i,j,n,s,count=0,counts=0;
	cin >> n;
	for(i=1;i<=n;i++){
		count =0;
		for(j=1;j<=3;j++){
			cin >> s;
			if(s==1) count++;
		}
		if(count>=2) counts++;
	}
	cout << counts;
	return 0;
}

