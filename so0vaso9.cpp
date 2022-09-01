#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string>q; // luu tat ca cac gia tri co the xay ra : 9, 90,99,909,...
		q.push("9");
		while(q.size()>0){
			string tmp = q.front();
			q.pop();
			ll so = 0;
			for(int i=0;i<tmp.size();i++){
				so = so*10 + (tmp[i]-'0');
				so%=n; // chia 1 string dai cho 1 so int
			}
			if(so==0){
				cout<<tmp<<endl;
				break;
			}
			q.push(tmp+"0");
			q.push(tmp+"9");
		}
	}
	return 0;
}