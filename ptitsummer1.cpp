#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m,n, i, j,result=-1;
ll a[101], b[101];

void in(){
	cin>>n>>m;
	for(i =0; i<n;i++)
		cin>>a[i];
}

void init(){
	for(i=0;i<n;i++){
		b[i]=0;
	}
}

ll sum(){
	ll s=0;
	for(ll u=0;u<n;u++){
		if(b[u]==1){
			s+=a[u];
		}
	}
	return s;
}

void Try(){
	for(i=n-1;i>=0;i--){
		if(b[i]==0){
			b[i]=1;
			for(j=i+1;j<n;j++)
				b[j]=0;
			if(sum()>result&&sum()<=m){
				result=sum();
			}
			i=n;
		} 
	}
}

int main(){
	ll t;
	cin>>t;
	for(int x=1;x<=t;x++){
		in();
		init();
		Try();
		cout<<result<<endl;
		result =-1;
	}
	
	return 0;
}


