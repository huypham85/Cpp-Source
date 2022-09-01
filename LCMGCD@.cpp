#include<bits/stdc++.h>
using namespace std;
long long UCLN(long long a, long long b){
    if(a==b) return a;
    if(a>b) 
        UCLN(a-b,b);
    else
        UCLN(a,b-a);
}
long long BCNN(long long a, long long b){
    return (a*b/UCLN(a,b) );
    }
    
int main(){
	long long t,n,j,i;
	vector<long long>vt;
	cin >> t;
	for(i=1;i<=t;i++){
		cin >> n;
		long long tmp =0;
		vt.clear();
		for(j=1;j<=n;j++){
			vt.push_back(j);
		}
		tmp=BCNN(vt[0],vt[1]);
		cout<<tmp<<endl;
		for(j=2;j<n;j++){
			tmp=BCNN(tmp,vt[j]);
			cout<<tmp<<endl;
		}
	cout <<tmp<<endl<<endl;
	}		
	return 0;
}


