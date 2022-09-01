#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int a[10006];
vector<int>b(10006);
int main(){
	int n,i,j,l,r;
	cin>>l>>r;
	for(i=0;i<10006;i++){
		a[i]=1;
		a[0]=0;
		a[1]=0;			
	}
	for(i=2;i<10006;i++){
		for(j=i*2;j<10006;j+=i){
			a[j]=0;
		}
	}
	for(i=l;i<=r;i++)
		b[i]=b[i-1]+a[i];		
	cout<<b[r]-b[l];		
	return 0;
}

