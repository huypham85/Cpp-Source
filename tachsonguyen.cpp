#include<bits/stdc++.h>
using namespace std;
vector<int>a;
void isolate(int i){
	while(i/10!=0){
		int k=i%10;
		a.push_back(k);
		i/=10;
	}
	a.push_back(i);
}

bool decrease(){
	for(int u=1;u<a.size();u++){
		if(a[u]>=a[u-1]) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int i;
    cin>>i;
    isolate(i);
    //sort(a.begin(), a.end());
    for(int j=0;j<a.size();j++){
    	cout<<a[j]<<" ";
	}
	cout<<endl;
    if(decrease()==true) cout<<"yes";
    else cout<<"no";
	return 0;
}

