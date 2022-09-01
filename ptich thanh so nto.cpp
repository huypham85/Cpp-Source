#include<bits/stdc++.h>
using namespace std;
int kt(long long n){
    if(n<=1) return 0;
    else{
        for(int i=2;i<=sqrt(n);i++) {
            if(n%i==0) return 0;
        }
    }
    return 1;
}
 
int main(){
long long t,n;
cin >> t;
for(long long j=1; j<=t; j++){
	long long i;
		cin >> n;
		long long b=n;
		for(i=2;i<=sqrt(n);i++){
			if(kt(b)==1&&b!=1){
				cout<<b<<" ";
				break;
			}
			if(b%i==0){
				if(kt(i)==1){
					while(b%i==0){
						cout<<i<<" ";   
						b=b/i;
					}
				}
			}
		}
		cout<<endl;	
	}
return 0;
}
