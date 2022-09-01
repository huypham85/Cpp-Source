#include<bits/stdc++.h>
using namespace std;
struct Data{
    int t,d;
};
bool cmp(Data a, Data b){
    return a.t<b.t;
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    Data a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i].t;
        cin>>a[i].d;
    }
    sort(a,a+n,cmp);
    for(int i=1;i<n;i++){
        if(a[i].t<(a[i-1].d+a[i-1].t)) a[i].t=a[i-1].d+a[i-1].t;
    }
    cout<<a[n-1].t+a[n-1].d;
    
	return 0;
}

