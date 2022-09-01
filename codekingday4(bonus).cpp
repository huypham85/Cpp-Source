#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
	ll t, n, dd;
	cin>>t;
	while(t--){
		cin>>n;
		ll a[n+1];
		dd=0;
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		for(ll i=0;i<n;i++){
			if(a[i]%2==1){
				dd=1;
				break;
			}		
		}
		sort(a, a+n);
		if(dd==0){
			//cout<<dd<<endl;
			ll dem=(a[0]/2)-1;
			for(ll i=0;i<=n-2;i++){
				ll tmp=((a[i+1]-a[i])/2 )-1;
				dem+=tmp;
				//cout<<dem<<endl;
			}
			
			if(dem%2==0) cout<<"Bi"<<endl;
			else cout<<"Lema"<<endl;
		}
		else{
			//cout<<dd<<endl;
			ll dem=a[0]-1;
			for(ll i=0;i<=n-2;i++){
				ll tmp=a[i+1]-a[i]-1;
				dem+=tmp;
			}
			if(dem%2==0) cout<<"Bi"<<endl;
			else cout<<"Lema"<<endl;
		}
	}
    
	return 0;
}

