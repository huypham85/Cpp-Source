#include<bits/stdc++.h>
using namespace std;

int main(){
	int kt=0,p1=0,p2=0,i;
	string n,s,s1,s2;
	cin>>n>>s;
	for( i=0;i<s.size();i++){
		if(s[i]!='4'&&s[i]!='7'){
			kt=1;
		}
	}
	if(kt==1)
		cout<<"NO";
	else{
		s1=s.substr(0,s.size()/2);
		s2=s.substr(s.size()/2);
		for(i=0;i<s1.size();i++){
			p1+=s1[i]-48;
		}
		for(i=0;i<s2.size();i++){
			p2+=s2[i]-48;
		}
		if(p1==p2) cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}

