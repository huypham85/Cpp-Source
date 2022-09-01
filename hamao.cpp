#include<bits/stdc++.h>
using namespace std;
class Hinh{
	public:
		virtual void ve(){
			cout<<"ve hinh"<<endl;
		}
};
class Hinhtron : public Hinh{
	int Bankinh;
	public:
		void ve(){
			cout<<"ve hinh tron"<<endl; 
		}
};
int main(){
	Hinh *h =new Hinhtron;
	h->ve();
	return 0;
}

