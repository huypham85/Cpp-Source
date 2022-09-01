#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    string t;
    vector<string>a;
    getline(cin, s);
    /*for(int i=0; i<s.size();i++){
		if(s[i]== ' ' && s[i+1]== ' '){
			s.erase(i+1,1);
			i--;
		}
	}*/
    for(int i=0;i<s.size();i++){
		if((s[i])>='A' && s[i]<='Z')
			s[i]= s[i]+32;
	}
	s+=' ';
	for(int i=0;i<s.size();i++){
		if(s[i]!=' '){
			t+=s[i];
		}
		else{
			a.push_back(t);
			t="";
		}
	}
	int len =a.size();
	int b[len]={0};
	for(int i=0;i<a.size();i++){
		for(int j=i;j<a.size();j++){
			if(a[j]==a[i]) b[i]++;
		}
	}
	int max=-1;
	for(int i=0;i<a.size();i++){
		if(b[i]>max) max=b[i];
	}
    for(int i=0;i<a.size();i++){
		if(b[i]==max) cout<<a[i]<<" "<<b[i];
	}
	return 0;
}

