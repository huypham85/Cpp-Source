

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
		sort(a.begin(), a.end());
		int index=0;
		/*for(int i=0;i<n;i+=2){
			b[i]= a[index++];
		}
		for(int i=1;i<n;i+=2){
			b[i]= a[index++];
		}*/
		int i=0,j=n-1;
		while(i<=j){
			if(i==j) cout<<a[i]<<" ";
			else{
				cout<<a[j]<<" "<<a[i]<<" ";
			}
			i++;
			j--;
		}
		cout<<endl;
	}
	return 0;
}

