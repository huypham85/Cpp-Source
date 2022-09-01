#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
string t="";
vector<string>a;
bool check(int i){
    string tmp=a[i];
    //cout<<tmp<<endl;
    for(int j=0;j<tmp.size();j++){
        if(tmp[j]>='a'&&tmp[j]<='z') return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    getline(cin,s);
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
    //for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    //cout<<endl;
    for(int i=0;i<a.size();i++){
        if(check(i)==true) cout<<a[i]<<" ";
    }
    return 0;
}