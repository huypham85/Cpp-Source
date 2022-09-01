#include<bits/stdc++.h>
using namespace std;

int main(){
	int i;
	string s;
	cin>>s;
	for(i=0;i<s.size();i++){
		if(s[i]>'A'&&s[i]<'Z'){
			s[i]=s[i]+32;
		}
	}
	for(i=0;i<s.size();i++){
		if(s[i]=='e'||s[i]=='u'||s[i]=='o'||s[i]=='a'||s[i]=='i'){
			s.erase(i,1);
			i--;
		}
	}
	for(i=0;i<s.size();i++){
		s.insert(i, ".");
		i++;
	}
	cout<<s;
	return 0;
}

