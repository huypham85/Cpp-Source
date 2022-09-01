#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	long long t,n,i,u,j,stt;
	cin>>t;
	string b1="TTT";
	string b2="TTH";
	string b3="THT";
	string b4="THH";
	string b5="HTT";
	string b6="HTH";
	string b7="HHT";
	string b8="HHH";
	for(u=1;u<=t;u++){
		cin>>stt;
		long long a[10];
		for(j=1;j<=8;j++)
			a[j]=0;
		string s;
		cin>>s;
		for(i=0;i<s.size()-2;i++){
			if(s[i]==b1[0]&&s[i+1]==b1[1]&&s[i+2]==b1[2]){
				a[1]++;
			}
			if(s[i]==b2[0]&&s[i+1]==b2[1]&&s[i+2]==b2[2]){
				a[2]++;
			}
			if(s[i]==b3[0]&&s[i+1]==b3[1]&&s[i+2]==b3[2]){
				a[3]++;
			}
			if(s[i]==b4[0]&&s[i+1]==b4[1]&&s[i+2]==b4[2]){
				a[4]++;
			}
			if(s[i]==b5[0]&&s[i+1]==b5[1]&&s[i+2]==b5[2]){
				a[5]++;
			}
			if(s[i]==b6[0]&&s[i+1]==b6[1]&&s[i+2]==b6[2]){
				a[6]++;
			}
			if(s[i]==b7[0]&&s[i+1]==b7[1]&&s[i+2]==b7[2]){
				a[7]++;
			}
			if(s[i]==b8[0]&&s[i+1]==b8[1]&&s[i+2]==b8[2]){
				a[8]++;
			}
		}
		cout<<stt<<" ";
		for(j=1;j<=8;j++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
			
	return 0;
}

