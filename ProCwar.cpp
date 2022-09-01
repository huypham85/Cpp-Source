#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<a.size();i++)
		cin>>a[i];
	sort(a.begin(), a.end());
	for(int i=0;i<a.size();i++){
		if(a[i]==a[i-1]){
			a.erase(a.begin()+(i-1));
			i--;
		}
	}
	/*for(int i=0;i<a.size(); i++)
		cout<<a[i]<<" "<<endl;*/
	if(k<=a.size()) cout<<a[k-1];
	else cout<<"-1";
	return 0;
}

