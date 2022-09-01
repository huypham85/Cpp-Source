#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	string s;
	cin>>s;
	long long d=0,i,j;
	for(i=0;i<s.size();i++){
		if(s[i]=='1')	d++;
	}
	if(d==s.size()){
		s.erase(1,1);
		cout<<s;
	}
	else{
		for(j=0;j<s.size();j++){
			if(s[j]=='0'){
				s.erase(j,1);
				cout<<s;
				break;
			}
		}
	}
	return 0;
}

