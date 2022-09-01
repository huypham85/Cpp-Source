#include<bits/stdc++.h>
using namespace std;
class sophuc
{
	private:
		int thuc;
		int ao;
	public:
		sophuc(){
			thuc=5;
			ao=3;
		}
		void xuat(){
			cout<<thuc<<" "<<ao<<endl;
		}
		friend void cong2sp(sophuc a, sophuc b); //ham friend
};
void cong2sp(sophuc a, sophuc b){
	sophuc c;
	c.thuc=a.thuc+b.thuc;
	c.ao=a.ao+b.ao;
	c.xuat();
}
int main(){
	sophuc a,b,c;
	cong2sp(a,b);
	return 0;
}

