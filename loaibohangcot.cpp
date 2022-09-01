#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000][1000];
int m, n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int max_row=-1;
    int max_col=-1;
    int row,col;
    for(int i=0;i<m;i++){
        int tmp=0;
        for(int j=0;j<n;j++){
            tmp+=a[i][j];
        }
        if(tmp>max_row){
            max_row=tmp;
            row=i;
        }
    }
    for(int i=0;i<n;i++){
        int tmp=0;
            for(int j=0;j<m;j++){
                if(j!=row)
                tmp+=a[j][i];
                //cout<<tmp<<endl;
            }
            if(tmp>max_col){
                max_col=tmp;
                col=i;
            }
    }
    for(int i=0;i<m;i++){
        if(i!=row){
            for(int j=0;j<n;j++){
                if(j!=col)
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}