#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int daonguoc(int a){
	int dv=0,dao=0;
	while(a>0){
			dv=a%10;
			dao=dao*10+dv;
			a=a/10;
	}
	return dao;
}
int main(){
	int a,b;
	cin >> a>>b;
	if(daonguoc(a)>daonguoc(b))
		cout<<daonguoc(a);
	else cout<<daonguoc(b);
	return 0;
}

