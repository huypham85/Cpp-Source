#include<bits/stdc++.h>
using namespace std;
class Sinhvien{
	private:
		string msv;
		string ten;
		int tuoi;
		int diem;
	public:
		void nhap(){
			cin>>msv;
			cin.ignore();
			cin>>ten;
			cin.ignore();
			cin>>tuoi>>diem;
			//cin.ignore();
		}
		void xuat(){
			cout<<msv<<" "<<ten<<" "<<tuoi<<" "<<diem<<endl;
		}
};
int main(){
	Sinhvien a,b;
	a.nhap();
	b.nhap();
	a.xuat();
	b.xuat();
	return 0;
}

