#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	while(s[0]==' ')
		s.erase(0,1);
	while(s[s.size()-1]==' ')
		s.erase(s.size()-1,1);
	for(int i=0; i<s.size();i++){
		if(s[i]== ' ' && s[i+1]== ' '){
			s.erase(i+1,1);
			i--;
		}
	}
	for(int i=0;i<s.size();i++){
		if((s[i])>='A' && s[i]<='Z')
			s[i]= s[i]+32;
	}
	s[0]=s[0]-32;
	for(int i=0;i<s.size();i++){
		if(s[i]==' '&& s[i+1]!=' '){
			s[i+1]=s[i+1]+'A'-'a';
		}
	}
	cout<<s.size() << endl<< s;	
	return 0;
}

