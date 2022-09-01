#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int i,j,t,h;
	cin>>t;
	for(i=1;i<=t;i++){
		vector<int>b(10);
		for(int h=0;h<10;h++){
			b[h]=0;
		}
		cin>>s;
		for(j=0;j<s.size();j++){
			int u=j;
			while(s[j]==s[u]){
				b[s[j]-48]++;
				u++;
			}
			cout<<b[s[j]-48]<<s[j];
			b[s[j]-48]=0;
			j=u-1;
		}
		cout<<endl;
	}	
	return 0;
}

