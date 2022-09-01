#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	long long n,t,i,j;
	long long fibo[93];
	fibo[1]=0;
	fibo[2]=1;
	fibo[3]=1;
	for(i=4;i<93;i++){
		fibo[i]=(fibo[i-1]+fibo[i-2]);
	}
	cin>>n;
	for(i=1;i<=n;i++)
		cout<<fibo[i]<<" ";
	return 0;
}

