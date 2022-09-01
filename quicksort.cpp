#include<bits/stdc++.h>
using namespace std;
void qsort(int left,int right,vector<int>&a){
	int i=left, j=right;
	int tmp;
	int pivot= a[(left+right)/2];
	while (i<=j){
		while (a[i]<pivot)
			i++;
		while (a[j]>pivot)
			j--;
		if (i<=j){
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			i++;
			j--;
		}
	}	
	if (i < right)
		qsort(i,right,a);
	if (left < j)
		qsort(left,j,a);
}
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	qsort(0,n-1,a);
	cout<<a[1]-a[0];
	return 0;
}

