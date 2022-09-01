#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,s,dem=0,minz=1e10;
ll a[31];
void in(){
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
}
void Try(ll i, ll res){
		if(res==s){
			minz=min(dem, minz);
		}
		else{
			for(ll j=i;j<n;j++){
				if(res+a[j]<=s){
					dem++;
					res+=a[j];
					Try(j+1, res);
					res-=a[j];
					dem--;
				}
				//else break;
			}
		}
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
		minz=(1e10);
        dem=0;
        in();
        Try(0,0);
        if(minz==1e10) cout<<"-1"<<endl;
        else cout<<minz<<endl;
    }
    
	return 0;
}