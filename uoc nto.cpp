#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	long long t,i=2,n;
	cin >> t;
	for(int j=1;j<=t;j++){
		cin >> n;
		while(n!=1){
			if(n%i==0){
				cout << i << " ";
				n/=i;
			}
			else
			i++;
		}
		cout << endl;
	}
	return 0;
}

