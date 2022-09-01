#include<bits/stdc++.h>
using namespace std;
long long m,n;
vector<int>a;

void isolate(long long i){
	while(i/10!=0){
		long long k=i%10;
		a.push_back(k);
		i/=10;
	}
	a.push_back(i);
}

void tinhgiaithua(long long i){
	long long p=0;
	for(long long x=0;x<a.size();x++){
		long long s=1;
		for(long long j=1;j<=a.size();j++)
			s*=a[x];
		p+=s;
	}
	if(p==i) cout<<i<<" ";
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>m>>n;
    if(m>n) swap(m,n);
    for(long long i=m;i<=n;i++){
    	a.clear();
    	long long tmp=i;
    	isolate(tmp);
    	tinhgiaithua(i);
	}
	return 0;
}

