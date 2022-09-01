#include<bits/stdc++.h>

using namespace std;
int n, k,t,stop=0;
int a[21];

void init(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}

void out(){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void Try(){
	int i=k;
	while(a[i]==n-k+i&& i>=0) i--;
	if(i==0) stop=1;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	} 
}

void solve(){
	while(stop==0){
		out();
		Try();
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    	cin>>n>>k;
    	if(n==k){
    		for(int h=1;h<=n;h++){
    			cout<<h;
			}
			cout<<endl;
		}
		else{
			init();
    		solve();
    		cout<<endl;
		}
		stop=0;	
	return 0;
}

