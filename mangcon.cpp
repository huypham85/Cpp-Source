#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, a[10000]={0},b[10000],maxx=-10000;
void out(){
	for(int i=0;i<n;i++)
		cout<<a[i];
	cout<<endl; 
}
bool check(){
    int dem=0,dd=1;
    for(int i=0;i<n;i++){
        if(a[i]==0) dem++;
    }
    if(dem==n-1) dd=0;
    dem=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) dem++;
    }
    if(dem==n-1) dd=0;
    if(dd==1) return true;
    else return false;
}

void solve(){
    int tmp1=0,tmp2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) tmp1=tmp1+b[i];
        else tmp2=tmp2+b[i];
    }
    maxx=max(maxx, tmp1*tmp2);
    //cout<<maxx<<endl;
}

void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n-1){
            if(!check()){
                //out();
                solve();
            }
        }
        else Try(i+1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    Try(0);
    cout<<maxx;
    return 0;
}