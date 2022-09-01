#include<bits/stdc++.h>
using namespace std;
 
long long mod=1000000007;
long long DQ_luythua (long long a, long long b)
{
	if (b==0) return 1;
	if (b%2==0)
	{
		long long p=DQ_luythua (a, b/2);
		return (p*p)%mod;
	}
	else
	{
		long long p=DQ_luythua (a, b-1);
		return (p*a)%mod;
	}
}
 
int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
	long long a, b;
	while (1)
	{
		cin>>a>>b;
		if (a==0 && b==0) break;
		cout<<DQ_luythua (a, b)<<endl;
	}
	return 0;
} 

