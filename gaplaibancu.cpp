#include<bits/stdc++.h>
using namespace std;
void sapxep(vector<long long> &vt){
	for(int i=0; i<4; i++){
		for(int j=4-1; j>i; j--){
			if(vt[j]<vt[j-1]){
				int tmp =vt[j];
				vt[j]=vt[j-1];
				vt[j-1]=tmp;
			}
		}
	}
}
int main(){
	vector<long long >vt;
	long long l1,r1,l2,r2,k;
	cin>>l1>>r1>>l2>>r2>>k;
	vt.push_back(l1);
	vt.push_back(r1);
	vt.push_back(l2);
	vt.push_back(r2);
	if(l1>r2||l2>r1) cout<<"0";
	else{
		sapxep(vt);
		if(k<=vt[2]&&k>=vt[1])
			cout<<vt[2]-vt[1];
		else 
			cout<<vt[2]-vt[1]+1;
	}
	return 0;
}

