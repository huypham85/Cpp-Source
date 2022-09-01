#include<bits/stdc++.h>
using namespace std;
int n,m,maxz=-1;
int w[101][2];
void in(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>w[i][j];
		}
	}
}

void Try(int i, int res, int value){
	for(int j=i;j<n;j++){
		if(res+w[j][0]<=m){
			res+=w[j][0];
			value+=w[j][1];
			maxz=max(maxz, value);
			Try(j+1, res,value);
			res-=w[j][0];
			value-=w[j][1];
		}
		// ko break vi co the phan tu dang sau do toi uu hon
	}
	
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		maxz=-1;
		in();
		Try(0,0,0);
		cout<<maxz<<endl;
	}
	return 0;
}

