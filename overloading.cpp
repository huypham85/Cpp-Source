#include<iostream>
using namespace std;
int abs(int a){
	if(a<0)
	return -a;
	else return a;
}
float abs(float a){
	if(a<0)
	return -a;
	else return a;
}
int main(){
	int a=6;
	float b=-4.5;
	cout<<"tri tuyet doi cua so nguyen la "<<abs(a)<<endl;
	cout<<"tri tuyet doi cua so thuc la "<<abs(b); 
	return 0;
}

