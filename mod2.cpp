#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,i,j,a,m;
	cin>>t;
	for(j=1;j<=t;j++){
		int d=1;
		cin>>a>>m;
		for(i=0;i<m;i++){
			if((a*i)%m==1){
				d=0;
				cout<<i<<endl;
				break;
			}		
		}
		if(d==1) cout<<"-1"<<endl;
	}
	return 0;
}

