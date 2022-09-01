#include<bits/stdc++.h>
using namespace std;
void nhiphan(int a){
    long long r,i=1, s=0;
    vector <long long> c;
    do{
        r=a%2;
        s += (i*r);
        c.push_back(s);
        a/=2;
        i*=10;
    }
	while(a>0);
	int len=c.size()-1;
    //for(int u=0;u<c.size();u++)
    	cout<<c[len];
}
int main(){
	long long n, i;
	cin>>n;
	long long b[n+1];
	for( i=0;i<n;i++)
		cin>>b[i];
	if(n%2==0) nhiphan(b[n/2-1]);
	else nhiphan(b[n/2]);
	return 0;
}
