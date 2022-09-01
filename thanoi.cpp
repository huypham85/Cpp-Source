#include<bits/stdc++.h>
using namespace std;

int main(){
	int ans,dd=1;
	string s, c;
	cin>>s>>c;
	for(int i=0; i<s.size(); i++){
		if(s[i]==c[0]){
			for(int j=i;j<s.size();j++){
				if(s[j]>c[0]){
					ans=i;
					dd=0;
					break;
				}
			}
		}
		else if(s[i]>c[0]&&dd==1){
			ans=i;
			break;
		}
		else continue;
	}
	cout<<ans;
	return 0;
}

