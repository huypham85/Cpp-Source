#include <iostream>
using namespace std;
 
int main (){
	int n;
	cin>>n;
	int a[100005];
	int dem=0;
	int vitri=-1;
	for (int i=1; i<=n; i++){
		cin>>a[i];
		if (i>1 && a[i]<a[i-1]){
			dem++;
			vitri=i;
		}
	}
	if (dem>1) 
		cout<<"-1";
	else if (dem==0) 
		cout<<"0";
	else if (dem==1){
		if (a[1]>=a[n]){
			cout<<(n-vitri+1);
		}
		else cout<<"-1";
	}
	return 0;
}
