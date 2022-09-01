#include<bits/stdc++.h>
using namespace std;
long long a[100], n;
void init(){
	for(long long i=0;i<n;i++)
		a[i]=0;
}
void out(){
	for(long long i=0;i<n;i++)
		cout<<a[i];
	cout<<endl;
}
void sinh(){
	for(long long i=n-1;i>=0;i--){
		if(a[i]==0){
			a[i]=1;
			for(long long j=i+1;j<n;j++){
				a[j]=0;
			}
			out();
			i=n;
		}
	}
}
int main(){
	cin>>n;
	init();
	out();
	sinh();
	return 0;
}

