#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct sv{
	string ten;
	int diemtoan;
	int diemli;
	int diemtin;
	
};
bool sosanh(sv a, sv b){
	if((a.diemtoan+a.diemli+a.diemtin)>(b.diemtoan+b.diemli+b.diemtin))
		return true;
	return false;
}
int main(){
	int n,i;
	cin >> n;
	cin.ignore();
	vector<sv>sinhvien(n);
	for(i=0;i<n;i++){
		getline(cin,sinhvien[i].ten);
	}
	for(i=0;i<n;i++){
		cin >> sinhvien[i].diemtoan;
	}
	for(i=0;i<n;i++){
		cin >> sinhvien[i].diemli;
	}
	for(i=0;i<n;i++){
		cin >> sinhvien[i].diemtin;
	}
	sv tongdiem = sinhvien[0];
	for(i=1;i<n;i++){
		if(sosanh(tongdiem, sinhvien[i])==false)
			tongdiem=sinhvien[i];
	}
	vector<sv>ans;
    for(int i=0;i<n;i++){
        if(sinhvien[i].diemtoan+sinhvien[i].diemli+sinhvien[i].diemtin==tongdiem.diemtoan+
        tongdiem.diemtin+tongdiem.diemli){
            ans.push_back(sinhvien[i]);
        }
    }
	for(i=0;i<ans.size();i++)
	cout << ans[i].ten<<" "<<ans[i].diemtoan <<" "<<ans[i].diemli<<" "<<ans[i].diemtin<< endl;
	return 0;
}

