#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	vector<int> c;
	for(int i=0;i<b.size();i++)
		c.push_back(b[i]-'0');
	sort(c.begin(), c.end());
	for(int i=0;i<a.size();i++){
		if(a[i]-'0'<c[c.size()-1]){
			a[i]=c[c.size()-1]+'0';
			c.pop_back();
		}
		if(c.size()==0) break;
	}
	cout<<a;
	return 0;
}

