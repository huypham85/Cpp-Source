#include<bits/stdc++.h>
using namespace std;
class Hang{
	private:
		string ma;
		string ten;
		int gia;
		int soluong;
	public:
		void nhap(){
			cin>>ma;
			cin.ignore();
			cin>>ten;
			cin.ignore();
			cin>>gia>>soluong;
		}
		void xuat(){
			cout<<ma<<" "<<ten<<" "<<gia*soluong<<endl;
		}
};
int main(){
	int n;
	cin>>n;
	cin.ignore();
	Hang *p;
	p=new Hang[n];
	for(int i=0;i<n;i++){
		(p+i)->nhap();
	}
	for(int i=0;i<n;i++){
		(p+i)->xuat();
	}
	return 0;
}

