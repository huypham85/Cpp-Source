#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	long long n,s=0,dem=0;
	vector<long long> vt;
	cin >> n;
	while(n%10!=0){
		s=n%10;
		vt.push_back(s);
		n/=10;
	}
	for(long long i=0;i<(vt.size());i++){
		if(vt[i]==4 || vt[i]==7)
			dem++;
	}
	if(dem==4||dem==7)
		cout << "YES";
	else cout << "NO";	
	return 0;
}

