#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	if(n>=m){
		cout<<m<<" ";
		n=n-m;
		if(n%2==0)
			cout<<n/2;
		else if(n>=3)
			cout<<(n-1)/2;
		else
			cout<<"0";
	}
	else{ 
		cout<<n<<" ";
		m=m-n;
		if(m%2==0)
			cout<<m/2;
		else if(m>=3)
			cout<<(m-1)/2;
		else cout<<"0";
	}
		
	return 0;
}

