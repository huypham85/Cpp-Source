#include<bits/stdc++.h>
using namespace std;

int a[51];
int main(){
	int t,n,i,j,u,x,y;
		for(i=0;i<51;i++){
			a[i]=1;
			a[0]=0;
			a[1]=0;			
		}
		for(i=2;i<51;i++){
			for(j=i*2;j<51;j+=i){
				a[j]=0;
			}
		}		
		cin>>x>>y;
		int kt=0;
		vector<int>vt;
		for(i=0;i<=50;i++){
			if(a[i]==1)
				vt.push_back(i);
		}
		for(i=0;i<vt.size();i++){
			if(x==vt[i]&&y==vt[i+1]){
				kt=1;
				break;
			}
			//else kt=0;
		}
		if(kt==1) cout<<"YES";
		else cout<<"NO";
	return 0;
}

