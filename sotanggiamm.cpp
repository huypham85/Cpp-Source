#include<bits/stdc++.h>
using namespace std;
long long n,lim=1,dem=0;
vector<int>a;

bool check(long long i){
	if(i<2) return false;
	for(long long j=2;j<=sqrt(i);j++){
		if(i%j==0) return false;
	}
	return true;
}

void isolate(long long i){
	while(i/10!=0){
		long long k=i%10;
		a.push_back(k);
		i/=10;
	}
	a.push_back(i);
}

bool increase(){
	for(long long u=1;u<a.size();u++){
		if(a[u]<=a[u-1]) return false;
	}
	return true;
}

bool decrease(){
	for(long long u=1;u<a.size();u++){
		if(a[u]>=a[u-1]) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(long long i=1;i<=n;i++){
    	lim*=10;
	}
    for(long long x=(lim/10);x<lim;x++){
    	a.clear();
    	if(check(x)==true){
    		isolate(x);
    		if(increase()==true||decrease()==true)
    			 dem++;
		}
	}
	cout<<dem;
	return 0;
}

