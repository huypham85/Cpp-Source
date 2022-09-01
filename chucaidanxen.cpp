#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin, s);
    for(ll i=0;i<s.size();i+=2)
    	cout<<s[i];
	return 0;
}

