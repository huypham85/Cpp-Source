#include<bits/stdc++.h>
using namespace std;
int t, n;
vector<int>a(21);
#define N 20
void init(){
	for(int i=0;i<N;i++){
		a[i]=0;
	}
}

void out(){
	for(int x=0;x<N;x++)
		cout<<a[x];
	cout<<endl;
}

void delete0(){
	for(int u=0;u<N;u++){
		if(a[u]==0){
			a.erase(a.begin()+u);
		}
		else return;
	}
}

void update(){
	
}

void sinh(){
	for(int i=N-1;i>=0;i--){
		if(a[i]==0){
			a[i]=1;
			for(int j=i+1;j<N;j++){
				a[j]=0;
			}
			delete0();
			update();
			out();
			i=n;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
    	cin>>n;
    	init();
    	sinh();
	}
    
	return 0;
}

