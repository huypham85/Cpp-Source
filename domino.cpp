#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin>>n;
	int dem=0;
	for(int i=0;i<=n;i++)
	for(int j=i;j<=n;j++)
		dem+=i+j;
	cout<<dem;
}
