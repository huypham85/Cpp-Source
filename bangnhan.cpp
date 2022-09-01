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
	int n,m,k;
	cin>>n>>m>>k;
	vector<int>a;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			a.push_back(i*j);
	}
	qsort(0,a.size()-1,a);
	cout<<a[k-1];
	return 0;
}

