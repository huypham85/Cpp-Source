#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	long long i,a,n;
	vector<int>vt;
	cin >> a;
	for(i=1; i<=a; i++){
		vt.clear();
		cin >> n;
		for(int j=1; j<=2;j++){
			int s=0;
			s=n%10;
			vt.push_back(s);
			n/=10;
		}
	if(vt[0]==6 && vt[1]==8) cout<<"1"<<endl;
	else cout << "0"<<endl;
	}	
	return 0;
}

