#include<bits/stdc++.h>
using namespace std;
int main(){
	long long i,j,k,n;
	cin>>n;
	vector<long long>a;
	for(i=1; i<=(long long)sqrt(n); i++){
		if(n%i==0){
			if(i*i==n){
				a.push_back(i); 			
			}
			else{
				a.push_back(i);
				a.push_back(n/i);
			}
		}
	}
	for(i=0; i<a.size(); i++)
		cout<<a[i]<<" ";
    return 0;	
}
	
