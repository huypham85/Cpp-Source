#include<bits/stdc++.h>
using namespace std;
class Hocsinh{
	private:
		int msv;
		string hoten;
	public:
		Hocsinh(){
		}
		Hocsinh(int ms, string ten){
			msv=ms;
			hoten=ten;
		}
		//cu phap ham sao chep
		//neu truyen tham tri=>tao ra 1 vung copy=> truyen tham chieu
		Hocsinh(const Hocsinh & hs ){
			hoten=hs.hoten;
		}
		void xuat(){
			cout<<msv<<" "<<hoten<<endl;
		}
};
int main(){	
	Hocsinh hs1(1,"Khoa"), hs2;
	hs2=Hocsinh(hs1);	
	hs2.xuat();
	return 0;
}

