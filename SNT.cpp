#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int i, n;
	cin >> n;
	int dd=1;
	if(n<2)
		dd=0;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0)
			dd=0;
	}
	if(dd==0)
		cout<< "NO";
	else
		cout<< "YES";	
	return 0;
}

