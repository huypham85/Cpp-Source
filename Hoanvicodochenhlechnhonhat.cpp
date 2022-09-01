#include<bits/stdc++.h>
using namespace std;
int result =99999999;
int n, k, check[10]={0}, a[10]={0};
vector <string> s;

void in(){
	cin>>n>>k;
	s.resize(n);
	for(int i=0;i<n;i++){
		cin>>s[i];
		s[i]=s[i];
	}
}

void solve(){
	int minn =99999999, maxx=-1;
	for(int u=0;u<s.size();u++){
		int tmp=0;
		for(int x=0;x<k;x++){
			tmp=tmp*10+(s[u][a[x]-1]-'0');
		}
		maxx=max(tmp, maxx);
		minn=min(minn, tmp);
	}
	result= min(result, maxx-minn);
}

void Try(int i){
	for(int j=1;j<=k;j++){
		if(check[j]==0){
			a[i]=j;
			check[j]=1;
			if(i==k-1)
				solve();
			else 
				Try(i+1);
			check[j]=0;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
	in();
	Try(0);
    cout<<result;
	return 0;
}

