#include<bits/stdc++.h>
using namespace std;
int n, x, y, dem=0;
int X[8]={2,2,1,1,-1,-1,-2,-2};//mang danh dau buoc co the di
int Y[8]={1,-1,2,-2,2,-2,1,-1};// mang danh dau buoc co the di
int a[10][10]={0};

void out(){
	for(int x=1;x<=n;x++){
		for(int j=1;j<=n;j++)
			cout<<a[x][j]<<" ";
		cout<<endl;
	}
}

void knight(int dem, int x, int y){
	int u,v;
	for(int i=0;i<8;i++){
		//khoi tao buoc di moi
		u=x+X[i];
		v=y+Y[i];
		if(u>=1 && u<=n && v>=1 && v<=n && a[u][v]==0){// kiem tra xem da tung den vi tri do hay chua?
			a[u][v]=dem;
			if(dem<n*n){
				knight(dem+1, u, v);
				a[u][v]=0;// neu ko tim dc thi quay lui lai	
			}
			else{
				out();
				//return ;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>x>>y;
    a[x][y]=1;
    knight(2,x, y);
	return 0;
}

