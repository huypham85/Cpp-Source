#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    string res;
    string tmp="@ptit.edu.vn";
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if((s[i])>='A' && s[i]<='Z')
			s[i]= s[i]+32;
	}
    res.push_back(s[0]);
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==' '&&s[i+1]!=' '){
            res.push_back(s[i+1]);
			//break;
        }
    }
	//res.pop_back();
    res.erase(res.size()-1, 1);
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==' '){
            for(int j=i+1;j<s.size();j++) res.push_back(s[j]);
            break;
        } 
    }
    res+=tmp;	
    cout<<res;
    return 0;
}