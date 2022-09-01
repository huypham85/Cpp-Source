#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, s,i,j,u,stop=0,result=9999999999999;
ll a[20], b[20];

void init(){
	for(i=0;i<n;i++){
		b[i]=0;
	}
}

void nhap(){
	cin>>n>>s;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
}

ll sum(){
	ll sumz=0;
	for(ll u=0;u<n;u++){
		if(b[u]==1){
			sumz+=a[u];
		}
	}
	return sumz;
}

void Try(){
	for(ll i=n-1;i>=0;i--){
		ll dem=0;
		if(b[i]==0){
			b[i]=1;
			for(ll j=i+1;j<n;j++){
				b[j]=0;
			}
			for(ll j=0;j<n;j++){
				if(b[j]==1)
					dem++;
			}
			if(sum()==s&&dem<=result){
				result=dem;
				stop=1;
			}
			i=n;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		nhap();
		Try();
		if(stop==0) cout<<"-1";
		else cout<<result;
	}
	return 0;
}

