#include<bits/stdc++.h>
using namespace std;
int n,maxz=1;
int a[1000001];
int p[100005];
int tanso[100005]={0};
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	tanso[a[i]]++;
	}
    	
    for(int i=0;i<100005;i++){
		p[i]=1;
		p[0]=0;
		p[1]=0;			
	}
	for(int i=2;i<100005;i++){
		int dem=0;
		if(p[i]==1){// neu chua dc dem
			for(int j=i;j<100005;j+=i){
				if(tanso[j]>0){ // neu so do da xuat hien 
					dem+=tanso[j];
				}
				p[j]=0;// gan =0 de sau ko bi dem lap
			}
		maxz=max(maxz,dem);
		}
	}
	cout<<maxz;
    
	return 0;
}

