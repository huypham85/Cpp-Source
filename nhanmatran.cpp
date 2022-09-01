#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int a[1000][1000], b[1000][1000],c[1000][1000];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
*/
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[j][i]=a[i][j];    
        }
    }
    /*for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
*/
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}