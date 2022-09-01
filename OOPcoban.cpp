#include<bits/stdc++.h>
using namespace std;
int x=5;
int main(){
	/*int x=16;
	cout<<"x o trong main="<<x<<endl;
	cout<<"x o ngoai main="<<::x<<endl;// truy xuat phan tu
	int *p;
	p=new int;//cap phat bo nho
	delete p; // giai phong bo nho*/
	int n;
	cin>>n;
	int *p;
	p=new int[n];
	/*for(int i=0;i<n;i++){
		cin>>*(p+i);
	}*/
	srand((unsigned)time(NULL));
	for(int i=0;i<n;i++){
		*(p+i)=rand()%99+1;
	}
	int tmp;
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(*(p+j)<*(p+j-1))
				swap(*(p+j), *(p+j-1));
		}
	}
	for(int i=0;i<n;i++)
		cout<<*(p+i)<<" ";
	return 0;
}

