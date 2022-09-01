#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;
 
int main(){
    fast_io;
    int n,x,db=0,dc=0;
    vector<int>a,b,c;
    cin>>n;
    a.resize(n);
    b.resize(n);
    c.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    b[0]=1;
    c[0]=0;
    for(int i=1;i<n;i++){
        if(b[i-1]==0) b[i]=1;
        else b[i]=0;
        if(c[i-1]==0) c[i]=1;
        else c[i]=0;
    }
    for(int i=0;i<n;i++){
       if(b[i] != a[i]) db++;
       if(c[i] != a[i]) dc++;
    }
    
    cout<<min(db,dc);
 
    return 0;
}