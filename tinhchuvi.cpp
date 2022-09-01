#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,a,b,c,s1,s2,s3,i,j,p;
	cin>>t;
	for(i=1;i<=t;i++){
		p=0;
		cin>>s1>>s2>>s3;
		a=sqrt(s1*s2*s3)/s1;
		b=sqrt(s1*s2*s3)/s2;
		c=sqrt(s1*s2*s3)/s3;
		p=((a+b)*4+c*4);
		cout<<p<<endl;
	}
	return 0;
}

