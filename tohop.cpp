#include<bits/stdc++.h>

using namespace std;
int n, k,s,t,stop=0;
int dem=0;
int a[21];

void init(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}

void sum(){
	int tmp=0;
	for(int u=1;u<=k;u++){
		tmp+=a[u];
	}
	if(tmp==s) dem++;
}

void Try(){
	int i=k;
	while(a[i]==n-k+i) i--;
	if(i==0) stop=1;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
		sum();
	} 
}

void solve(){
	while(stop==0){
		Try();
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    while(true){
		cin>>n>>k>>s;
		if(n==0&&k==0&&s==0) break;
		else if(n<k) cout<<"0"<<endl;
		else{
			init();
	    	solve();
	    	cout<<dem<<endl;
			stop=0;
			dem=0;	
		}
	}
	return 0;
}

