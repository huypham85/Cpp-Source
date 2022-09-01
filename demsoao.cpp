#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, m;
bool visited[501][501];
int a[501][501];
char b[501][501];
// quay lui tren mang 2 chieu
int X[]={-1,-1,-1,0,0,1,1,1};
int Y[]={-1,0,1,-1,1,-1,0,1};
void dfs(int i, int j){
    visited[i][j] = true;
    // cac cach co the di
    for(int k = 0;k<8;k++){
        int x = i+ X[k];
        int y = j+ Y[k];
        if(x>=0&&y>=0&&x<n&&y<m&&visited[x][y]==false&&a[x][y]==1)
            dfs(x, y);
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        cin>>n>>m;
        cin.ignore();
        int res=0;
        memset(visited,false,sizeof(visited));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>b[i][j];
                if(b[i][j]=='W') a[i][j] =1;
                else a[i][j]=0;
                visited[i][j] ==false;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j]&&a[i][j]==1){
                    res++;
                    dfs(i,j);
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}