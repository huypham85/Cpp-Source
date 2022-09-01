#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 150000
 
vector<ll> prime(MAX), countNext(MAX);
void sieve() {
	for (int i=2;i*i<=MAX;++i) { 
        if (!prime[i]) {
            for (int j=i*2;j<=MAX;j+=i) 
                prime[j]=i; 
        }
    } 
 
    for (int i=1;i<MAX;++i) 
        if (!prime[i]) 
            prime[i]=i; 
}
 
void solve(){
	ll n, res = 1;
	cin>>n;
	vector<ll>a(n);
	for (int i=0;i<n;i++) cin>>a[i];
	for (int i=0;i<n;i++) {
		ll value = a[i];
		while(value>1) {
			ll findNext=prime[value];
			countNext[findNext]++;
			res=max(res, countNext[findNext]);
			while(value%findNext==0) {
				value /= findNext;
			}
		}
	}
	cout<<res<<endl;
}
int main(){
	sieve();
	int t=1;
	//cin >> t;
	while(t--) {
		solve();
	}
 
	return 0;
}
