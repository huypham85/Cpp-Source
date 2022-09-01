#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	long long i,n,m,s=0;
	cin>>n>>m;
	for(i=1;i<=m;i++){
		s+=((n%i)%1000000007);
	}
	cout<<s;
	return 0;
}

