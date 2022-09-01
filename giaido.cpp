#include<bits/stdc++.h>
using namespace std;
int t, n;
int a[10001];
int main(){
	int t,n,i,j,u,x,y;
		for(i=0;i<10001;i++){
			a[i]=1;
			a[0]=0;
			a[1]=0;			
		}
		for(i=2;i<10001;i++){
			for(j=i*2;j<10001;j+=i){
				a[j]=0;
			}
		}
        //cout<<a[1000]<<endl;
        vector<int>vt;
		for(i=0;i<=10000;i++){
			if(a[i]==1)
				vt.push_back(i);
		}		
		cin>>t;
        while(t--){
            cin>>n;
            cout<<vt[n-1]<<endl;
        }
		
	return 0;
}

