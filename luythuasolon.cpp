#include<bits/stdc++.h>
using namespace std;
 
long long modulo=1000000007;
long long dequy (long long a, long long b)
{
	if (b==0) return 1;
	if (b%2==0)
	{
		long long p=dequy (a, b/2);
		return (p*p)%modulo;
	}
	else
	{
		long long p=dequy (a, b-1);
		return (p*a)%modulo;
	}
}
 
int main ()
{
	long long a, b;
	while (1)
	{
		cin>>a>>b;
		if (a==0 && b==0) break;
		cout<<dequy (a, b)<<endl;
	}
	return 0;
} 
