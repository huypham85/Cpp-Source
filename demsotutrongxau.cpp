#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin,s);
    int dem=1;
    for(int i=0;i<s.size();i++){
    	if(s[i]!=' ') continue;
    	else if(s[i]==' '&&s[i+1]!=' ') dem++;
	}
    cout<<dem;
	return 0;
}

