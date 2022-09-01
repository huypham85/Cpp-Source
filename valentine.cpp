#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
   	string s;
   	cin>>s;
   	if(s[0]!='1'){
   		cout<<"NO";
   		return 0;
	}
	for(ll i=0;i<s.size();i++){
		if(s[i]!='1'&&s[i]!='4'){
			cout<<"NO";
			return 0;
		}
		if(s[i]=='4'){
			ll dem=1;
			for(ll j=i+1;j<s.size();j++){
				if(s[j]=='4') dem++;
				else break;
				if(dem==3){
					cout<<"NO";
					return 0;
				}
			}
		}
	}
    cout<<"YES";
	return 0;
}

