#include<bits/stdc++.h>
using namespace std;
bool check(int x){
	if(x<2) return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    int a[n+1];
    vector<int>b;
    int tanso[10000]={0};
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	if(check(a[i])==true){
    		b.push_back(a[i]);
    	}
	}
	//for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
	for(int i=0;i<b.size();i++){
		tanso[b[i]]++;
	}
	for(int i=0;i<10000;i++){
		if(tanso[i]!=0){
			cout<<i<<" "<<tanso[i]<<endl;
		}
		
	}
	return 0;
}

