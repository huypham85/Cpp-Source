#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	string str;
	int tanso[100006]={0};
	getline(cin,str);
	for(int i=0; i<str.size();i++){
		if(str[i]<='z'&&str[i]>='a')
			str[i]=str[i]+32;
	}
	for(int i=0;i<str.size();i++){
		tanso[str[i]]++;	
	}
		for(char j=65;j<=90;j++){
			if(tanso[j]!=0)
				cout<< j<< " "<< tanso[j]<< endl;
		}
			
	return 0;
}

