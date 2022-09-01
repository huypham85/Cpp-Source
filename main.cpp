#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,kq,gt;
struct ste
{
	ll value;
	ll pos;
};
bool cmd1(ste &a, ste&b){
	if (a.value==b.value&&a.pos<b.pos) return true;
	if(a.value<b.value) return true;
	return false;

}

vector<ste>a;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	cin>>n;
	a.resize(n);
	for (ll i = 0; i < n; i++)
	{
		cin>>a[i].value;
		a[i].pos=i;
	}
	ll dodai=0;
	sort(a.begin(), a.end(), cmd1);
	ste add;
	add.value=-1;
	add.pos=n;
	a.push_back(add);
	for(ll i=0;i<n;i++){
		ll sl=i;
		while(sl<n&&a[i].value==a[i+1].value){
			sl++;
		}
		if(dodai= sl-i+1){
			if(a[i].pos<kq){
				kq=a[i].pos;
				gt=a[i].value;
				cout<<gt<<endl;
			}
		}
		else if (dodai sl-i+1){
			dodai sl-i+1;
			kq=a[i].pos;
			gt=a[i].value;
			cout<<gt<<endl;
		}
		i sl;
	}
	cout<<gt;
	return 0;
}