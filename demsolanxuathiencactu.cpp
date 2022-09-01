#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    string t;
    vector<string>a;
    getline(cin, s);
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
	for(int i=0;i<a.size();i++){
		int dem=1;
		if(a[i]!="@"){
			for(int j=i+1;j<a.size();j++){
				if(a[j]==a[i]){
					dem++;
					a[j]="@";
				}
			}
		cout<<a[i]<<" "<<dem<<endl;
		}
		else continue;
	}
    
	return 0;
}

