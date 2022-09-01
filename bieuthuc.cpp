#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
long long n,k;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>k;
    for(long long i=0;i<n;i++){
    	cin>>a[i];
	}
	sort(a+1, a+n, greater<int>());
    for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
    cout<<endl;
    long long s=0;
    for(long long i=0;i<=k;i++){
    	s+=a[i];
	}
	for(long long i=k+1;i<n;i++){
    	s-=a[i];
	}
	cout<<s;
	return 0;
}

