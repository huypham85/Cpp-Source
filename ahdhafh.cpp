#include<bits/stdc++.h>
using namespace std;
 
string Binary(int n){
	int tmp;
	string s = "";
	while(n > 0){
		tmp = n % 2;
		n /= 2;
		char x = tmp +'0';
		s.push_back(x);
	}
	return s;
}
 
int main(){
	int n;
	cin >> n;
//	cout <<Binary(n);
	int a[n+1];
	for(int i = 0; i < n; i++)	cin >> a[i];
	sort(a, a+n);
	int b[n];
	for(int i = 0; i < n; i++){
		b[n-i-1] = a[i];
	}
	int k;
	if(n%2 == 1)	k = n/2;
	else k = n/2-1;
	cout << Binary(b[k]) << endl;
	
	return 0;
}

