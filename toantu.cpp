#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i;
	string s;
	cin>>n;
	int value=0;
	for(i=1;i<=n;i++){
		cin>>s;
	if(s=="X++")	value++;
	if(s=="X--")	value--;
	if(s=="++X")	++value;
	if(s=="--X")	--value;
	}
	cout<<value;
	return 0;
}

