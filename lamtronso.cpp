#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,i,j;
	string s;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>s;
		if(s.size()==1)
			cout<<s;
		else{
			if(s[0]>=5)	s[0]=10;
			for(i=s.size()-1;i>=0;i--){
				if(s[i]>='5')
					s[i]='0';
			}
			cout<<s;
		}
		cout<<endl;
	}
	return 0;
}

