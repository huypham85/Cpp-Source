#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int i;
	string a,b;
	string s="qwertyuiopasdfghjkl;zxcvbnm,./";
	cin >> a>> b;
	if(a=="L"){
		for(i=0;i<b.size();i++){
			if(b[i]=='p'||b[i]==';'||b[i]=='/'){
				if(b[i]=='p'){
					b[i]='q';
				}
				if(b[i]==';'){
					b[i]='a';
				}
				if(b[i]=='/'){
					b[i]='z';
				}
			}
			else
			b[i]=s[s.find(b[i])+1];
		}
	}
	if(a=="R"){
		for(i=0;i<b.size();i++){
			if(b[i]=='q'||b[i]=='a'||b[i]=='z'){
				if(b[i]=='q'){
					b[i]='p';
				}
				if(b[i]=='a'){
					b[i]=';';
				}
				if(b[i]=='z'){
					b[i]='/';
				}
			}
			else
			b[i]=s[s.find(b[i])-1];
		}
	}
	
	cout<< b;
	return 0;
}

