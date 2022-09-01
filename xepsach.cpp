#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	int x=n, dem=0;
	for(int i=n;i>=1;i--){
		if(a[i]==x) x--;
		else dem++;
	}
    cout<<dem;
	return 0;
}

