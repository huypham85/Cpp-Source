#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, k, x;
	cin>>n>>k>>x;
	vector<long long>a(n);
	vector<long long>b;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		b.push_back(abs(x-a[i]));
	sort(b.begin(), b.end());
	for(int i=0;i<k;i++)
		cout<<b[i]<<" ";
	return 0;
}

