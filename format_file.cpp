#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin>>n;
    for(ll i=1;i<=6;i++){
    	if(i==1&&n%1024!=0){
    		cout<<n<<" "<<"byte";
    		return 0;
		}
		else if(i>=1&&n%1024!=0){
			if(i==2){
				cout<<n<<"KiB";
				return 0;
			}
			else if(i==3){
				cout<<n<<"MiB";
				return 0;
			}
			else if(i==4){
				cout<<n<<"GiB";
				return 0;
			}
			else if(i==5){
				cout<<n<<"TiB";
				return 0;
			}
			else if(i==6){
				cout<<n<<"PiB";
				return 0;
			}
		}
		else n/=1024;
	}
    
	return 0;
}

