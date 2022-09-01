#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin, s);
    for(int i=0; i<s.size();i++){
		if(s[i]== ' ' && s[i+1]== ' '){
			s.erase(i+1,1);
			i--;
		}
	}
    for(int i=0;i<s.size();i++){
		if((s[i])>='A' && s[i]<='Z')
			s[i]= s[i]+32;
	}
    vector<string>a;
    string tmp="";
    int dem=0, dem1=0;
    for(int i=0;i<s.size();i++){
    	if(s[i]==' '){
    		dem++;
		}
	}
    for(int i=0;i<s.size();i++){
    	if(s[i]==' '){
    		dem1++;
    		for(int j=0;j<=i;j++){
    			tmp.push_back(s[j]);
			}
			a.push_back(tmp);
			s=s.substr(i+1);
			tmp="";
			if(dem1==dem) a.push_back(s);
			i=0;
		}
	}
	sort(a.begin(), a.end());
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<endl;
	}
	int dem2=0;
	for(int i=0;i<=a.size();i++){
		if(a[i]==a[0]) dem2++;
		else	break;
	}
	cout<<a[0]<<" "<<dem2;
	return 0;
}

