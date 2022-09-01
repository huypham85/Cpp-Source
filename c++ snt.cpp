#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>

using namespace std;
void nhap(){
	int a;
	cin >> a;
}
int kt(int a, int i){
	if(a<2)
		return 0;
	else{
		for(i=2; i<=sqrt(a); i++){
			if(a%i==0){
				return 0;
				break;
			}
			else{ 
				return 1;
				cout << "here";
			}
		}
	}
}
int main(){
	int a, i;
	nhap();
	if(kt(a,i)==0)
		cout<<"ko la so nt";
	else //if(kt(a,i)==1)
		cout<<"la so nt";
	return 0;
}

