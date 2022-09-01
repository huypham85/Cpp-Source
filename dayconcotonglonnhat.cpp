#include<bits/stdc++.h>

using namespace std;
int main(){
	long long n, s=0,S;
	cin>>n;
	long long a[n+1];
	for (long long i=1;i<=n;i++){
		cin>>a[i];
	}
	s=a[1];
	S=s;
	long long L=1,R=1,l=1,r=1;
	for (long long i=2;i<=n;i++){
		if(s+a[i]>a[i]){
			s+=a[i];
			r++;
		}
		else{
			s=a[i];
			l=i;
			r=i;
		}
		if(S<s){
			S=s;
			L=l;
			R=r;
		}
	}
	cout<<L<<" "<<R<<" "<<S;
}
