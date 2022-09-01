#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	int i;
	for(i=0;i<s.size();i++){
		if(i%2==0&&(s[i]-48)%2==0||i%2==1&&(s[i]-48)%2==1)
			return false;
	}
	return true;
}
int main(){
	long long t,n,i,j;
	string s;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>s;
		if(check(s)==false)
			cout<<"NO"<<endl;
		else 
			cout<<"YES"<<endl;
	}
	return 0;
}

