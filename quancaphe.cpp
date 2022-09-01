#include<bits/stdc++.h>
using namespace std;
struct person{
	int h,m;
};
int main(){
	int n,i,j,dem=1;
	cin>>n;
	vector<person>a(n);
	for(i=0;i<n;i++)
		cin>>a[i].h>>a[i].m;
	for(i=0;i<n-1;i++){
		if(a[i].h==a[i+1].h&&a[i].m==a[i+1].m)
			dem++;
	}
	cout<<dem;
	return 0;
}

