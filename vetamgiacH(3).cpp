#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int space=n-1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=space;j++){
			cout<<"~";
		}
		space--;
		for(int u=1;u<=2*i-1;u+=2)
			cout<<u;
		for(int u=2*i-3;u>=1;u--){
			if(u%2==1)
				cout<<u;
			else continue;
		}
		cout<<endl;
		
	}
	return 0;
}

