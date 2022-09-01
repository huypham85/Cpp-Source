#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	char chuoi[100];
	cin.ignore();//fflush(stdin)
	cin.getline(chuoi,100);//fgets(chuoi, 100, stdin)
	cout<<chuoi;
	return 0;
}

