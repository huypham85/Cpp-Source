#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll l, r,dem=0;
ll a[1000001]={1};
void sang(){
	int n=1000000;
    for(int i=2;i<=n;i++){
    	for(int j=1;j<=n/i;j++){
    		a[j*i]+=i;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>l>>r;
    sang();
    for(int i=l;i<=r;i++){
    	if(a[i]-i>i) dem++;
	}
	cout<<dem;
	return 0;
}

