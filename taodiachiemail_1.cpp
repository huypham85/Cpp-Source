#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    string res;
    string tmp="@ptit.edu.vn";
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if((s[i])>='A' && s[i]<='Z')
			s[i]= s[i]+32;
	}
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==' '){
            for(int j=i+1;j<s.size();j++) res.push_back(s[j]);
            break;
        } 
    }
    res.push_back(s[0]);
    for(int i=1;i<s.size()-1;i++){
        if(s[i]==' '&&s[i+1]!=' '){
            res.push_back(s[i+1]);
			//break;
        }
    }
	res.erase(res.size()-1,1);
    res+=tmp;	
    cout<<res;
    return 0;
}