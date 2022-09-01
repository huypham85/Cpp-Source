#include <bits/stdc++.h> 
using namespace std; 

void nhiphan(long long n){ 
    long long ans[100000]; 
    long long i = 0; 
    while (n>0) { 
        ans[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    for (long long j = i-1; j >=0; j--) 
        cout << ans[j]; 
} 
int main() { 
    long long n, i;
	cin>>n;
	long long b[n+1];
	for(i=0;i<n;i++)
		cin>>b[i];
	sort(b, b+n);
	reverse(b, b+n);
	if(n%2==0) nhiphan(b[n/2-1]);
	else nhiphan(b[n/2]);
    return 0; 
} 

