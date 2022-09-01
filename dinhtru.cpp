#include<iostream>

using namespace std;
#define MAX 101

class Dothi{
    int n;
    int a[MAX][MAX];
    
    public:
    bool chuaxet[MAX];
    void dfs(int u);
    void init();
    void readData();
    void duyetDinh();
};

void Dothi::readData(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
}
void Dothi::init(){
    for(int i=1;i<=n;i++) chuaxet[i]=true;
}
void Dothi::dfs(int u){
    chuaxet[u]=false;
    for(int v=1;v<=n;v++){
        if(a[u][v]==1&&chuaxet[v]==true){
            dfs(v);
        }
    }
}

void Dothi::duyetDinh(){
    init();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==1){
                a[i][j]=-1;
            }
        }
        if(i==1) dfs(2);
        else dfs(1);
        for(int j=1;j<=n;j++){
            if(chuaxet[j]==1&&j!=1){
                cout<<i<<" ";
                break;
            }
        }
        for(int j=1;j<=n;j++){
            if(a[i][j]==-1){
                a[i][j]=1;
                a[j][i]=1;
            }
        }
        init();
    }
}

int main(){
    Dothi G;
    G.readData();
    G.duyetDinh();
    return 0;
}