#include <bits/stdc++.h>
using namespace std;
void doan(){
	string kt;
	getline(cin, kt);
		if(kt=="dung"){
			cout << "2" << endl;
		}
		if(kt=="lon hon"){
			cout << "1" << endl;
		}
		if(kt=="nho hon"){
			cout << "3" << endl;
		}
}

int main(){
	int n, i;
	cin >> n;
	cin.ignore();
	for( i =0; i<n; i++){
		doan();
	}
}
