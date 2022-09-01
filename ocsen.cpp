#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// cac vi tri co the di
int X[4]={0, 0, -1, 1};
int Y[4]={1, -1, 0, 0};
int a[101][101];
int n, m, x, y,dem=1,maxx=1;

void nhap(){
    cin>>n>>m>>x>>y;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
}

void out(){
	for(int x=1;x<=n;x++){
		for(int j=1;j<=m;j++)
			cout<<a[x][j]<<" ";
		cout<<endl;
	}
}

void solve(int x1, int y1){
    int u, v;
    for(int i=0;i<4;i++){
        // khoi tao buoc di moi
        u=x1+X[i];
        v=y1+Y[i];
        if(u>=1&&u<=n&&v>=1&&v<=m&&(a[u][v]==0)){
            dem++;
            maxx=max(maxx, dem); // do ko biet diem dung nen danh phai lay max :((
            a[u][v]=2;// danh dau ko dc di vao
            solve(u, v);
            //dem--;
            //a[u][v]=0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    nhap();
    a[x][y]=2;
    solve(x, y);
    //out();
    cout<<maxx;
    return 0;
}