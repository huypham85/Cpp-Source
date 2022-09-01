#include <bits/stdc++.h>
using namespace std;

main(){
	while(1){
		string a;
		cin>>a;
		if(a=="0"){
			return 0;
		}else {
			long long s=0;
			for(long long i=0;i<a.size();i++){
				long long so=a[i]-48;
				if(so>4)	so-=1;
				s=s*9+so;
			}
			cout<<a<<": "<<s<<endl;
		}
	}
}
