#include<bits/stdc++.h>
using namespace std;
int a[11][11]={0}, n,dem=0;

void init(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=0;
		}
	}
}

bool check(int row, int col){
	int i, j;
	for(i=0;i<col;i++){// check hang;
		if(a[row][i]==1)
			return false;
	}
	for(i=0;i<row;i++){//check cot
		if(a[i][col]==1)
			return false;
	}
	i=row, j=col;
	while(i>=0&&j>=0){//check trai tren
		if(a[i][j]==1) return false;
		i--;
		j--;
	}
	i=row, j=col;
	while(i>=0&&j>=0){//check trai duoi
		if(a[i][j]==1) return false;
		i++;
		j--;
	}
	return true;
}

void out(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void queen(int col){
	if(col>=n){
		dem++;
	}
	for(int i=0;i<n;i++){
		if(check(i, col)==true){
			a[i][col]=1;//dat hau
			queen(col+1);
			a[i][col]=0;//lui lai
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		dem=0;
		init();
		queen(0);
		cout<<dem<<endl;
	}
	return 0;
}

