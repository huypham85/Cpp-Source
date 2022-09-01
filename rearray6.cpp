#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int>a,b;
		a.resize(n);
		b.resize(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                a[i]*=2;
                a[i+1]=0;
            }
        }
        int tmp=0;
		for(int i=0;i<n;i++){
            if(a[i]==0) tmp++;
            else cout<<a[i]<<" ";
        }
		for(int i=1;i<=tmp;i++) cout<<"0"<<" ";	
            
		
		cout<<endl;
	}
	return 0;
}