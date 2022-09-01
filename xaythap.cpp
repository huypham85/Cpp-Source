#include<bits/stdc++.h>
using namespace std;
/*int sum(int n){
    if (n==1) return 1;
    return sum(n-1) + n;
}*/
int main(){
	int n,i,s=0;
	int sum[105]={0};
	sum[1]=1;
	for(i=2;i<105;i++){
		sum[i]=sum[i-1]+i;
	}
	cin>>n;
	int thap[105]={0};
	for(i=1;i<=104;i++){
		s+=sum[i];
		thap[i]+=s;
	}
	for(i=1;i<=104;i++){
		if(n==thap[i]||n>thap[i]&&n<thap[i+1])
			cout<<i;
	}
	return 0;
}

