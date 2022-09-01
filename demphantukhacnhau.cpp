#include<bits/stdc++.h>
using namespace std;
map<long long, long long> b;
int main(){
	long long a[5],i,j,dem=0;
	for(i=0;i<4;i++){
		cin>>a[i];
		if(b[a[i]]==0)	dem++;
		b[a[i]]=1;
	}
    cout<<4-dem;
	return 0;
}

