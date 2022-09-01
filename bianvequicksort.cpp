#include<bits/stdc++.h> 
using namespace std;
long long dem=0;
long long quickSort(long long a[], long long left, long long right){
	long long i=left, j=right;
	long long tmp;
	long long pivot= a[(left+right)/2];
	
	while (i<=j){
		while (a[i]<pivot)
			i++;
		while (a[j]>pivot)
			j--;
		if (i<=j){
			dem++;
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			i++;
			j--;
		}
	}	
	if (left < j)
		quickSort(a,left,j);
	if (i < right)
		quickSort(a,i,right);
	return dem;
}
int main(){
	long long a[100005];
	long long n;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<(quickSort(a,0,n-1))<<endl;
	if((quickSort(a,0,n-1))%2==0) cout<<"1";
	else cout<<"0";
}
