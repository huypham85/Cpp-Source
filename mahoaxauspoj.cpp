#include <bits/stdc++.h>
using namespace std;

main(){
	long long t;
	cin>>t;
	cin.ignore();
	while(t>0){
		string a;
		getline(cin,a);
		long long arr[256];
		long long dem=0;
		for(long long i='a';i<='z';i++){
			arr[i]=0;
		}
		for(long long i=0;i<a.size();i++){
			if(a[i]>='A'&&a[i]<='Z'){
				a[i]+=32;
			}
			arr[a[i]]+=1;
		}
		for(long long i=0;i<a.size();i++){
			if(arr[a[i]]>1&&a[i]!=' '){
				dem+=arr[a[i]];
				arr[a[i]]=1;
			}
		}
		cout<<dem<<" ";
		for(long long i=0;i<a.size();i++){
			if(arr[a[i]]>0&&a[i]!=' '){
				cout<<a[i];
				arr[a[i]]=0;
			}
		}
		cout<<endl;
		t--;
	}
}
