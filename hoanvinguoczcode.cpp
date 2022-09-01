#include <iostream>
using namespace std;
int	n, X[100], unused[100],dem=0;
void print(){
	for(int j=1; j<=n; j++) cout << X[j];
    cout<<" ";
}
void BackTrack(int i){
	for(int j=n; j>=1; j--){
		if(unused[j]==1){	
			X[i]=j;			
			unused[j]=0;	
			if(i==n)		
				print();
			else			
				BackTrack(i+1);
			unused[j]=1;
		}
	}
	return;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int j=1; j<=n; j++)	unused[j]=1;	
		BackTrack(1);
		cout<<endl;	
	}
		
}