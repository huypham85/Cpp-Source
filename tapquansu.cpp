#include<bits/stdc++.h>
using namespace std;
int t, n, k, result=0;
vector<int> a(41);
vector<int> b(41);

void Try(){
	int i=k;
	while(a[i]==n-k+i&& i>0) i--;
	if(i==0) result=k;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	} 
}

void check(){
	for(int i=1;i<=k;i++){
		int error =0;
		for(int j=1;j<=k;j++){
			if(a[i]==b[j]){
				error=1;
				break;
			}
		}
		if(error==0) result++;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
    	result=0;
    	cin>>n>>k;
    	for(int i=1;i<=k;i++)
    		cin>>a[i];
    	b=a;
    	Try();
    	check();
    	cout<<result<<endl;
	}
    
	return 0;
}

