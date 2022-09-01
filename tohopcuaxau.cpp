#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j;
	cin>>n; 	
	string s;
	cin>>s;
	string tmp=" ";
	for(i=0;i<n;i++){
		tmp=" ";
		for(j=i;j<n;j++){
			tmp+=s[j];
			cout<<tmp<<endl;
		}
	}
	return 0;
}

