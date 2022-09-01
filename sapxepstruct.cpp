#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct cow{
	int h,m,s;
};
int main(){
	int n,i,j;
	cin >> n;
	vector<cow>a(n);
	for(i=0;i<n;i++)
		cin>> a[i].h>>a[i].m>>a[i].s;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i].h>a[j].h||a[i].h==a[j].h&&a[i].m>a[j].m||a[i].h==a[j].h&&a[i].m==a[j].m&&a[i].s>a[j].s){
				cow s=a[i];
				a[i]=a[j];
				a[j]=s;
			}
		}
	}
	for(i=0;i<n;i++)
	cout <<a[i].h<<" "<<a[i].m<<" "<<a[i].s<<endl;
	return 0;
}

