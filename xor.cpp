#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int a[100]={};
    for(int i=1;i<=22;i++){
    	cin>>a[i];
	}
    for(int i=1;i<=126;i++){
    	for(int j=1;j<=22;j++){
    		int k;
    		k=(a[j]^j);
    		cout<<(char)k;
		}
		cout<<endl;
	}
	return 0;
}

