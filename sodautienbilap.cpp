#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll a[100005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<ll,ll>check;
        for(int i=0; i<n; i++){
            cin>>a[i];
            check[a[i]]++;
        }
		int dd=0;
        for(int i=0; i<n; i++){
            if(check[a[i]]>1){
				cout<<a[i]<<endl;
				dd=1;
				break;
			}
        }
		if(dd==0) cout<<"NO"<<endl;
    }
    return 0;
}