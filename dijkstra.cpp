#include<bits/stdc++.h>

using namespace std;
#define MAX 100
#define MAXX 10000000

int n;
int s;
int truoc[MAX];
int d[MAX];
int matrix[MAX][MAX];
bool chuaxet[MAX];

void Input(){
    cin>>n;
    cin>>s;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==0) matrix[i][j]=MAXX;
        }
    }
}

void Result(int t){
    if(chuaxet[t]==false) cout<<"K/c "<<s<<" -> "<<t<<" = INF;"<<endl;
    else{
        cout<<"K/c "<<s<<" -> "<<t<<" = "<<d[t]<<";\t";
        cout<<t<<" <- ";
        int i = truoc[t];
        while(i!=s){
            cout<<i<<" <- ";
            i = truoc[i];
        }
        cout<<s<<endl;
    }
}

void Init(){
    for(int v = 1;v<=n;v++){
        d[v]=matrix[s][v];
        truoc[v]=s;
        chuaxet[v]=false;
    }
    truoc[s]=0;
    d[s]=0;
    chuaxet[s]=true;
}

void Dijkstra(){
    for(int i=1;i<=n;i++){
        if(i!=s){
            int u, minp;
            Init();
            while(!chuaxet[i]){
                minp=MAXX;
                int dd=0;
                for(int v=1;v<=n;v++){
                    if((!chuaxet[v])&&(minp>d[v])){
                        dd=1;
                        u=v;
                        minp=d[v];
                    }
                }
                if(dd==0) break;
                chuaxet[u]=true;
                if(!chuaxet[i]){
                    for(int v=1;v<=n;v++){
                        if((!chuaxet[v])&&(d[u]+matrix[u][v]<d[v])){
                            d[v]=d[u]+matrix[u][v];
                            truoc[v]=u;
                        }
                    }
                }
            }
            Result(i);
        }
        if(i==s){
            cout<<"K/c "<<s<<" -> "<<i<<" = 0;\t";
            cout<<i<<" <- "<<i<<endl;
        }
    }
}

int main(){
    Input();
    Dijkstra();
    return 0;
}
