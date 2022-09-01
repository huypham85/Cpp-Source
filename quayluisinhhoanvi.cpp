#include<bits/stdc++.h>
using namespace std;
int check[100]={0};//mang danh dau da dung hay chua
void out(int *a, int n){
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<endl; 
}
void Try(int *a, int i,int n){
	for(int j=1;j<=n;j++){
		if(check[j]==0){//neu chua dung
			a[i]=j;
			check[j]=1;//danh dau da dung
			if(i==n)
				out(a, n);
			else Try(a, i+1, n);
			check[j]=0;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[n+1]={0};
	Try(a, 1, n);
	return 0;
}
