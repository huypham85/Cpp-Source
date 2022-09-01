#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
 
int main (){
	string s;
	while (1){
		cin>>s;
		if (s=="#")
			break;
		int len=s.length();
		int countY=0;
		int countN=0;
		int countP=0;
		int countA=0;
		for (int i=0; i<len; i++){
			if (s[i]=='Y') 
				countY++;
			if (s[i]=='N') 
				countN++;
			if (s[i]=='P')
				countP++;
			if (s[i]=='A') 
				countA++;
		}
		if ((float)countA>=(float)len/2.0) cout<<"need quorum"<<endl;
		else{
			if (countY>countN) cout<<"yes"<<endl;
			else if (countN>countY) cout<<"no"<<endl;
			else cout<<"tie"<<endl;
		}
	}
	return 0;
}
