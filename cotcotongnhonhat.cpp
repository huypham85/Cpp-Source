#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000][1000];
int n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int max_row=-1;
    int min_col=9999999;
    int row,col;
    for(int i=0;i<n;i++){
        int tmp=0;
        for(int j=0;j<n;j++){
            tmp+=a[j][i];
        }
        if(tmp<min_col){
            min_col=tmp;    
            col=i;
        }
    }
    cout<<col+1<<endl;
    for(int j=0;j<n;j++)
        cout<<a[j][col]<<" ";       
    return 0;
}