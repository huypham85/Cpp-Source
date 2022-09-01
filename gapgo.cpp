#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,x1,i,j,k,u,a[4];
	cin>>t;
	for( k=1;k<=t;k++){
	for(u=0;u<3;u++)
		cin>>a[u];
	if(a[0]==a[1]&&a[1]==a[2])
		cout<<"0"<<endl;
	else{
		for(i=0;i<3;i++){
			for(j=2;j>i;j--){
				if(a[j]<a[j-1]){
				int tmp =a[j];
				a[j]=a[j-1];
				a[j-1]=tmp;
			}
			}
		}
		cout<<a[2]-a[0]<<endl;
	}
	}
	return 0;
}

