#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[10000][10000];
vector<int>res1, res2;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int m,n,l,r;
    cin>>m;
    for(int i=1;i<=m;i++){
    	for(int j=1;j<=m;j++)
    		cin>>a[i][j];
	}
    int tmp=m+1;
    for(int i=1;i<=m;i++){
        res1.push_back(a[i][i]);
        tmp--;
        res2.push_back(a[i][tmp]);
        //cout<<a[i][tmp]<<endl;
        //cout<<tmp<<endl;
    }
    /*for(int i=0;i<res1.size();i++){
        cout<<res1[i]<<" ";
    }
    cout<<endl<<endl;
    for(int i=0;i<res2.size();i++){
        cout<<res2[i]<<" ";
    }
    cout<<endl<<endl;*/
    tmp=m+1;
    for(int i=1;i<=m;i++){
        a[i][i]=res2[i-1];
        tmp--;
        a[i][tmp]=res1[i-1]; 
    }
    for(int i=1;i<=m;i++){
    	for(int j=1;j<=m;j++)
    		cout<<a[i][j]<<" ";
        cout<<endl;
	}
    
    return 0;
}