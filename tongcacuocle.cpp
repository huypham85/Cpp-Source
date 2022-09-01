#include<bits/stdc++.h>
#define maz 1000006
using namespace std;
int c[maz],i,j;
int main(){
	long long s=0, a,b;
	for(i=1;i<maz;i++){
		c[i]=1;
	}
	for(i=3;i<maz;i++){
		if(i%2==1){
			for(j=i;j<maz;j+=i)
				c[j]+=i;
		}
		else continue;
	}
	cin>>a>>b;
	for(i=a;i<=b;i++)
		s+=c[i];
	cout<<s;
	
	return 0;
}

