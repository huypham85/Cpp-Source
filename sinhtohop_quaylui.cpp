
#include <bits/stdc++.h>
using namespace std;
int	n, k, X[100], count=1,dem=0;
void print(){
	//cout << "\n" << count++ << ": ";
	for(int j=1; j<=k; j++) cout << X[j];
	cout<<" ";
}
void BackTrack(int i){
	dem++;
	for(int j=X[i-1]+1; j<=n-k+i; j++){
		X[i]=j;			
		if(i==k)		
			print();
		else			
			BackTrack(i+1);
	}
	//cout<<dem<<endl;
	return;
}
int main() {  
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		X[0]=0;
		BackTrack(1);	
		cout<<endl;
	}
}