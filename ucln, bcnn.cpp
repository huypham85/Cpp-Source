#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
long long a, b, m,n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a >> b;
		if(a==0 && b==0)
			break;
		else{
			m=a*b;
			while(a!=b){
				 if(a>b)
				 a= a-b;
				 else
				 b=b-a;
			}
			cout << m/a <<" "<< a<< endl;
		}
	}
	return 0;
}

