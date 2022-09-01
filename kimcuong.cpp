#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,n;
	string x,y;
	cin>>n;
	x="";
	y="D";
	for(i=1;i<=(n-1)/2;i++)
		x+='*';
	cout<<x<<y<<x<<endl;
	for(i=1;i<=(n-1)/2;i++){
		x.erase(0,1);
		y=y+'D'+'D';
		cout<<x<<y<<x<<endl;
	}
	for(i=1;i<=(n-1)/2;i++){
		y.erase(0,2);
		x=x+'*';
		cout<<x<<y<<x<<endl;
	}
	return 0;
}

