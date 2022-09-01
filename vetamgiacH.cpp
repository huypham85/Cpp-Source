#include<bits/stdc++.h>
using namespace std;

int main(){
	string s="BDFHJLNPRTVXZ";
	int n;
	cin>>n;
	cout<<"@"<<endl;
	for(int i=1;i<n;i++){
		cout<<"@";
		for(int j=0;j<=i-1;j++)
			cout<<s[j];
		for(int j=i-2;j>=0;j--)
			cout<<s[j];
		cout<<"@"<<endl;
	}
	return 0;
}

