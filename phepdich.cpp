#include<bits/stdc++.h>
using namespace std;
void daonguoc(string s){
	for(int i=s.size()-1;i>=0;i--){
		cout<<s[i];
	}
	cout<<endl;
}
int main(){
	int k,i,j;
	string s;
	string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
	while(1){
		cin>>k;
		if(k==0) return 0;
		cin>>s;
		for(i=0;i<s.size();i++){
			if(a.find(s[i])+k>=28)
				s[i]=a[a.find(s[i])+k-28];
			else
				s[i]=a[a.find(s[i])+k];
		}
		daonguoc(s);
	}
	return 0;
}

