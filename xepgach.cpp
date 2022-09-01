#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int a[1000];
	for(int i = 0; i<n; i++)
		cin >> a[i];
		
	sort(a, a+n, greater<int>());
	
	int dem = 0;
	int temp = 0;
	for(int i = 0; i<n; i++){
		dem ++;
		temp = dem;
		for(int j = 0; j<=i; j++){
			if(temp > a[j]){
				cout << dem;
				return 0;
			}
			temp--;
		}
	}
	cout << dem;
	return 0;
}