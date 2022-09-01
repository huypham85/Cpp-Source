#include<bits/stdc++.h>
using namespace std;
bool tonguoc(long long n){
	long long s=0;
	for(long long j=1;j<=n/2;j++){
		if(n%j==0)
			s+=j;
	}
	if(s==n) return true;
	else return false;

}
int main(){
	long long a, b;
	cin>>a>>b;
	for(long long i=a;i<=b;i++){
		if(tonguoc(i))
			cout<<i<<" ";
	}
	return 0;
}

