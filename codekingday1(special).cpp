#include<bits/stdc++.h>
using namespace std;
int n, m,dem=0,stop;

void in(){
	cin>>n>>m;
}

void Try(long long res){
	if(res==m){
		cout<<dem;
		stop=1;
		return;
	}
	else{
		for(int j=2;j<=3;j++){
			if(stop==1) break;
			if(res*j<=m){
				res*=j;
				dem++;
				Try(res);
				dem--;
				res/=j;
			} 
		}
	}	
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    stop=0;
    in();
    Try(n);
    if(stop==0) cout<<"-1";
	return 0;
}

