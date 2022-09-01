#include<bits/stdc++.h>
using namespace std;
class Phanso{
	private:
		int tuso, mauso;
	public:
		void nhap();
		Phanso rutgon();
		void xuat();
};
//cach dung thu nhat cua con tro this la tro den cac thanh phan cua class hien tai
void Phanso::nhap(){
	cout<<"nhap tu so: ";
	cin>> this->tuso;
	cout<<"nhap mau so: ";
	cin>>this->mauso;
}
void Phanso::xuat(){
	cout<<this->tuso<< "/"<< this->mauso;
}
//cach dung thu hai la tra ve object hien tai
Phanso Phanso::rutgon(){
	int a , b;
	a=abs(this->tuso);
	b=abs(this->mauso);
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	} 
	this->tuso/=a;
	this->mauso/=b;
	return *this;
}
int main(){
	Phanso ps;
	ps.nhap();
	ps.rutgon();
	ps.xuat();
	return 0;
}

