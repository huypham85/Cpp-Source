#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	long long a,b,c;
	cin>>a>>b>>c;
	long long s=(a+b+c)/3;
	long long x=0;
	x=abs(a-s)+abs(b-s)+abs(c-s);
	cout << x;
		
	return 0;
}

