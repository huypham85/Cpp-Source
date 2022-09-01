#include<bits/stdc++.h>
using namespace std;
class Sinhvien{
	private: //thuoc tinh
		string msv;
		string ten;
		int tuoi;
	public: //phuong thuc
		Sinhvien(){ //constructor: khoi tao gia tri
			msv="10001";
			ten="huy";
			tuoi=1;
		}
		~Sinhvien(){//huy doi tuong(destructor)(co the tu dong dc goi)
			cout<<"huy doi tuong"<<endl;
		}
		void noichuyen(){
			cout<<"noilinhtinh"<<endl;
		}
		void choigame(){
			cout<<"choigame"<<endl;
		}
		void inthongtin(){
			cout<<msv<<" "<<ten<<" "<<tuoi<<endl;
		}
};
int main(){
	Sinhvien a;
	a.choigame();
	a.inthongtin();// truy xuat tu private
	return 0;
}

