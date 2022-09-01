#include<bits/stdc++.h>
using namespace std;
class Nguoi{
	protected:
		string ten;
		int tuoi;
	public:
		void noichuyen(){
			cout<<"noi"<<endl;
		}
};
class Sinhvien :public Nguoi{//ke thua theo cai nao chat che hon(protected chat che hon public) 
	string msv;
	public:
		Sinhvien(){
			ten="A";
			tuoi=1;
			msv="8501";
		}
		void xuat(){
			cout<<ten<<" "<<tuoi<<" "<<msv<<endl;
		}	
};
int main(){
	Sinhvien a;
	a.noichuyen();
	a.xuat();
	Nguoi *g=new Sinhvien;  
	g->noichuyen();
	((Sinhvien*)g)->xuat();
	return 0;
}

