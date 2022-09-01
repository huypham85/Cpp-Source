#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,i,j;
	cin>>t;
	for(i=1;i<=t;i++){
		 double n, l,m;
		 cin>>n>>l>>m;
		 long long dem=0;
		 while(n<=m){
		 	n+=n*l/100;
		 	dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}

