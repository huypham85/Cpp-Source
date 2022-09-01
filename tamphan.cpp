#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int n;
	cin >>n;
	string a;
	if (n==0)
	 cout <<"0";
	else{
		while (n){
			if (n%3==0) 
			a.push_back('0');
			if (n%3==1) 
			a.push_back('1');
			if (n%3==2) 
			a.push_back('2');
			n=n/3;
		}
		for (int i=a.length()-1;i>=0;i--){
			cout <<a[i];
		}
	}	
return 0 ;
}

