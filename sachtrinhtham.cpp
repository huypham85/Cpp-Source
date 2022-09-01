#include<bits/stdc++.h>
using namespace std;
int n,dem=0;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	a[0]=0;
    for(int i=1;i<=n;i++){
    	if(a[i]==i&&a[i-1]<=i){
			dem++;
		}
	}
	cout<<dem;
	return 0;
}

