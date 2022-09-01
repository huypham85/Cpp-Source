#include<bits/stdc++.h>
using namespace std;
long long toNum (string s){
    long S = 0;
    for (int i=0; i<s.length(); i++){
        int tmp = s[i] - '0';
        S = S*10 + tmp;
    }
    return S;
}

int main(){
	string s;
	cin>>s;
	string sub= s.substr(0,2);
	string sub1=s.substr(2,6);
	if(s[8]=='A'&&s[9]=='M'){
		if(sub=="12"){
			cout<<"00"<<sub1;
		}
		else{
			s.erase(8, 2);
			cout<<s;
		}
	}
	else{
		if(s[0]=='1'&&s[1]=='2'){
			s.erase(8, 2);
			cout<<s;
		}
		else{
			int tmp = toNum(sub)+12;
			cout<<tmp<<sub1;
		}
	}
	return 0;
}

