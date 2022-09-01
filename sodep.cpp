#include<bits/stdc++.h>
using namespace std;
int check(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]!='0'&&s[i]!='6'&&s[i]!='8')
			return 0;
	}
	return 1;
}
int main(){
	string s;
	cin>>s;
	cout<<check(s);
	return 0;
}

