#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,a, b,minz=1e12,maxz, maxD,dem;
ll w[101][2];

void in(){
	cin>>a>>b;
	for(ll i=0;i<a;i++){
		for(ll j=0;j<2;j++){
			cin>>w[i][j];
		}
	}
}

void findDmax(){ // tim khoang cach max
	maxD=-1;
	for(ll i=0;i<a;i++){
		ll tmp=w[i][0]-w[i][1];
		if(tmp>maxD) maxD=tmp;
	}
}

void findmax(){ // tim d[i] max
	maxz=-1;
	for(ll i=0;i<a;i++){
		ll tmp=w[i][0];
		if(tmp>maxz) maxz=tmp;
	}
}

void solve(){
	if(maxD<=0){
		if(b-maxz<=0) dem++;
		else return;
	}
	else if(maxD>0&& b-maxz<=0){
		dem++;
	}
	else if(maxD>0){
		while(b-maxD>=0){
			b=b-maxD;
			dem++;
			if(b-maxz<=0){
				dem++;
				return;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
    	minz=1e12;
    	in();
    	dem=0;
    	findDmax();
    	findmax();
    	solve();
    	if(dem==0) cout<<"MISSION FAILED!"<<endl;
    	else cout<<dem<<endl;
	}
	return 0;
}

