#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;

float solve(int n,float x){
    float s=1,mu=1;
    int gt=1;

    for(int i=1;i<=n;i++){
        mu=mu*x;
        gt=gt*i;
        s=s+mu/gt;
       
    }
    return s;
}

int main(){
    fast_io;
    int n;
    float x;
    cin>>n>>x;
    cout<<fixed<<setprecision(4)<<solve(n,x)<<endl;
    


    return 0;
}