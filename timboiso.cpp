#include<bits/stdc++.h>
using namespace std;
int t, h;
vector<int>a(18);
long long b[501]={0};
#define N 13

void init(){
	for(int i=0;i<N;i++){
		a[i]=0;
	}
}

void sinh(){
	for(int i=N-1;i>=0;i--){
		if(a[i]==0){
			a[i]=1;
			for(int j=i+1;j<N;j++){
				a[j]=0;
			}
			long long s=0;
			for(int j=0;j<N;j++){
				s=10*s+a[j];
			}
			s*=9;
			for(int j=1;j<=500;j++){
				if(s%j==0&&s>=j&&b[j]==0){
					b[j]=s;
				}
			}
			i=N;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    init();
    sinh();
    while(t--){
    	cin>>h;
    	cout<<b[h]<<endl;
	}
	return 0;
}


