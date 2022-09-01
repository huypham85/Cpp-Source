#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main (){
	ll n,i,j,count=0;
	cin >>n;
	vector<ll>vt;
	vector<ll>sub;
	vt.resize(n);
	for(i=0;i<n;i++)
		cin>>vt[i];
	for(i=1;i<n;i++){
		if(vt[i]>=vt[i-1]){
			count++;
			sub.push_back(count);
		}
		else count=0;
	}
	sort(sub.begin(), sub.end());
	ll len=sub.size();
	cout << sub[len-1]+1;
    return 0;
}

