#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int dem=-1;
	string s1;
	getline(cin,s1);
	for(int i=3;i<s1.size();i++){
		if(i%3==0){
			dem++;
			s1.insert(i+dem, ",");
		}
	}
	if(s1[s1.size()-1]== ',')
		s1.erase(s1.size()-1, 1);
	cout << s1;
	return 0;
}

