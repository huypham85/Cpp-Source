#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[10000][10000];
vector<int>res1, res2;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int m,n,l,r;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
    	for(int j=1;j<=n;j++)
    		cin>>a[i][j];
	}
    cin>>l>>r;
    for(int i=1;i<=m;i++){
        res1.push_back(a[i][l]);
        res2.push_back(a[i][r]);
    }
    for(int i=1;i<=m;i++){
        a[i][l]=res2[i-1];
        a[i][r]=res1[i-1]; 
    }
    for(int i=1;i<=m;i++){
    	for(int j=1;j<=n;j++)
    		cout<<a[i][j]<<" ";
        cout<<endl;
	}
    
    return 0;
}