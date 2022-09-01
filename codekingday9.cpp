#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
ll t, a, b,res;
vector<ll>vt;

void isolate(ll i){
	while(i/10!=0){
		ll k=i%10;
		vt.push_back(k);
		i/=10;
	}
	vt.push_back(i);
}
bool check(ll x){
    for(ll i=0;i<vt.size();i++){
        if(x%vt[i]!=0)
            return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        res=0;
        cin>>a>>b;
        for(ll i=a;i<=b;i++){
            vt.clear();
            isolate(i);
            if(check(i)==true) res++;
        }
        cout<<res<<endl;
        vt.clear();
    }
    
    return 0;
}

