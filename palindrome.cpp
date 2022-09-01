#include<bits/stdc++.h>
using namespace std;
int dd[126];
void khoitao(){
	for (int i=97;i<=122;i++)
	{
		dd[i]=0;
	}
}
 
int kt(int a[]){
	int demLe=0;
	int demChan=0;
	for (int i=97; i<=122; i++){
		if (a[i]%2==0) demChan++;
		else demLe++;
	}
	if (demLe>=4) return 0;
	else return 1;
}
 
int main (){
	int t;
	cin>>t;
	string s;
	for (int u=1;u<=t;u++){
		khoitao();
		cin>>s;
		for (int i=0;i<s.size();i++){
			int so=s[i]-0;
			dd[so]++;
		}
		if (kt(dd)==1) 
		cout<<"YES"<<endl;
		else 
		cout<<"NO"<<endl;
	}
 
	return 0;
}
