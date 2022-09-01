#include<bits/stdc++.h>
using namespace std;
class Phanso{
	private:
		int tuso, mauso;
	public:
		Phanso(){
			tuso=0;
			mauso=10;
		}
		Phanso(int tu, int mau){
			tuso=tu;
			mauso=mau;
		}
		Phanso(int tu){
			tuso=tu;
		}
		void xuat(){
			cout<<tuso<<" "<<mauso<<endl;
		}
};
int main(){
	//cach 1: truc tiep
	Phanso ps(1,4);
	//cach 2; gian tiep
	Phanso ps2=Phanso(2,3);
	Phanso ps3(3);
	Phanso ps4;
	ps.xuat();
	ps2.xuat();
	ps3.xuat();
	ps4.xuat();
	return 0;
}

