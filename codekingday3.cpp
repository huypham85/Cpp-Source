#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,a, b,minz=1e12,stop=0;
ll w[101][2];

void in(){
	cin>>a>>b;
	for(ll i=0;i<a;i++){
		for(ll j=0;j<2;j++){
			cin>>w[i][j];
		}
	}
}

void Try(ll res, ll dem){
	for(ll i=0;i<a;i++){
		if(w[i][1]<w[i][0]||res-w[i][0]==0){
			res-=w[i][0];
			dem++;
			if(res==0||res<0){
				minz=min(dem, minz);
				stop=1;
				return;
			}
			else if(res>0) res+=w[i][1];
			Try(res, dem);
			if(res==0){
				res+=w[i][0];
				dem--;
			}
			else{
				res=res+w[i][0]-w[i][1];
				dem--;
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
    	stop=0;
    	in();
    	Try(b,0);
    	if(stop==0) cout<<"MISSION FAILED!"<<endl;
    	else cout<<minz<<endl;
	}
	return 0;
}

