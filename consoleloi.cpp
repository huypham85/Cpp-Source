#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
	string s;
	getline(cin, s);
	vector<ll>a;
	for(ll i=0;i<s.size();i++){
		if(s[i]!=' ')
			a.push_back(s[i]-'0');
	}
	sort(a.begin(), a.end());
	for(ll i=0;i<a.size();i++) cout<<a[i];
	cout<<endl;
	ll i=0;
	while(i<a.size()){
		if(a[i]==a[i+1])
			i+=2;
		else{
			cout<<a[i];
			return 0;
		}
	}
	return 0;
}

