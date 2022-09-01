#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int a,b,i,tanso[3]={0};
	for(i=1;i<=3;i++){
		cin>> a>>b;
		tanso[a]++;
		tanso[b]++;
	}
	for(i=0;i<3;i++){
		if(tanso[i]!=0)
		cout<<tanso[i]<<" ";
	}
	return 0;
}

