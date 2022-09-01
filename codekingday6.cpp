#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,l,r,maxz=0;
vector<ll> a(100001), b(100001),x;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
	cin>>n;
	a.resize(n);
	b.resize(n);
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
    for(ll i=0;i<n;i++){
		cin>>b[i];
	}
	ll l1=0, r1=0,l2=0,r2=0,tmp,tmp2=0;
	tmp=b[0];
	x=a;
	sort(x.begin(), x.end());
	ll biggest=x[n-1];
	
	a.push_back(0);
	b.push_back(0);
	for(ll i=0;i<n;i++){
		if(a[i]!=biggest){
			tmp2+=b[i];
		}
		else{
			tmp2+=b[i];
			r2=i;
			break;
		}
	}
	
	for(ll i=0;i<n;i++){
		if(a[i+1]>=a[i]&&a[i+1]!=0){
			tmp+=b[i+1];
			r1=i+1;
		}
		else{
			if(tmp>maxz){
				maxz=tmp;
				l=l1;
				r=r1;
				l1=i+1;
				r1=i+1;
				tmp=b[i+1];
			}
		}
	}
	if(tmp2>maxz){
		maxz=tmp2;
		l=l2;
		r=r2;
	}
	cout<<l<<" "<<r<<" "<<maxz<<" "<<biggest;
	return 0;
}

