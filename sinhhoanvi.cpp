#include<bits/stdc++.h>
using namespace std;
void init(int *a, int n){
	for(int i=1;i<=n;i++)
		a[i]=i;
}
void xuat(int *a, int n){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
/*duyet tu cuoi ve dau, tim phan tu dau tien lam mat tinh giam.
 duyet tu cuoi ve dau tim phan tu dau tien lon hon phan tu vua tim dc, doi cho, sort lai phan dang sau*/
int main(){
	int n;
	cin>>n;
	int a[n+1];
	init(a, n);
	xuat(a,n);
		for(int j=n;j>=1;j--){
			if(j==1) return 0;
			if(a[j-1]<a[j]){
				for(int i=n; i>=1;i--){
					if(a[i]>a[j-1]){
						swap(a[i], a[j-1]);
						sort(a+j, a+n+1);
						xuat(a, n);
						break;
					}	
				}
			j=n+1;
			}
		}
	return 0;
}

