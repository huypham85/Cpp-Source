
#include <bits/stdc++.h>
using namespace std;
int	n, k, X[10000], cnt=0;
int a[10000];
void print(){
    cnt++;
    bool ok = true;
    for(int j=1; j<=k; j++){
        if(X[j]!=a[j]){
            ok = false;
            break;
        }
    }
    if(ok) cout << cnt;
}
void BackTrack(int i){
	for(int j=X[i-1]+1; j<=n-k+i; j++){
		X[i]=j;			
		if(i==k)		
			print();
		else			
			BackTrack(i+1);
	}
	return;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
        cnt =0;
        for(int i =1;i<=k;i++){
            cin>>a[i];
        }
		X[0]=0;
		BackTrack(1);	
		cout<<endl;
	}
}