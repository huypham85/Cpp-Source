#include<bits/stdc++.h>
using namespace std;
int n,m,p;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>m>>p;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
    for(int i=0;i<m;i++){
    	cin>>b[i];
	}
	a.insert(a.begin()+p, b.begin(), b.end()-1);
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
	return 0;
}

