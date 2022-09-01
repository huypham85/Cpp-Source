#include<bits/stdc++.h>
#define max 10000007

using namespace std;

long long a[max];
vector<long long>vt;
int main(){
	long long i,n,t,j,u;
	for(i=0;i<max;i++){
		a[0]=0;
		a[1]=0;
		a[i]=1;
	}
	for(i=2;i<max;i++){
		for(j=i*2;j<max;j+=i){
			a[j]=0;
		}
	}
	for(i=2;i<max;i++){
		if(a[i]==1)
			vt.push_back(i);
	}
	long long x;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>n;
		int b=n;
		for(j=0;j<vt.size();j++){
			while(b%vt[j]==0){
				cout<<vt[j]<<" ";
				b/=vt[j];
		 	}
			if(b==1) break;
		}
		cout<<endl;
	}	
	return 0;
}

