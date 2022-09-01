#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,dem=0;
	string s1,s2;
	cin>>n;
	cin>>s1>>s2;
	for(i=0;i<n;i++){
		if(abs((s1[i]-'0')-(s2[i]-'0'))<=5)
			dem=dem+abs((s1[i]-'0')-(s2[i]-'0'));
		else dem=dem+(10-abs((s1[i]-'0')-(s2[i]-'0')));
	}
	cout<<dem;
	return 0;
}

