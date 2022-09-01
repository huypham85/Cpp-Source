#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j;
	string s;
	getline(cin,s);
	for(i=0;i<s.size();i++){
		//string tmp='s[i+1]';
			if(s[i]==s[i+2]){
				s.erase(i,1);
				i--;
			}
	}
	for(int i=0; i<s.size();i++){
		if(s[i]== ' ' && s[i+1]!= ' '){
			s.erase(i,1);
			i--;
		}
	}
	
	cout<<s;
	return 0;
}

