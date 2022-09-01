#include<bits/stdc++.h>
using namespace std;
int check[21]={0};
int n, dem=0;
int a[21];
vector<vector<int> > b;
	
void in(){
	cin>>n;
}

bool prime(int x){
	if(x<2) return false;
	for(int u=2;u<=sqrt(x);u++){
		if(x%u==0) return false;
	}
	return true;
}

void Try(int i){
	for(int j=1;j<=n+n;j++){
		if(check[j]==0){
			a[i]=j;
			check[j]=1;
			if(i==n+n){
				if(prime(a[i]+a[i-1])==true&&prime(a[n+n]+a[1])==true){
					dem++;
					if(dem<=10000){
						vector<int> c;
						for(int h=1;h<=n+n;h++){
							c.push_back(a[h]);
						}
						b.push_back(c);
					}
				}	
			}
			else{
				if(i==1) Try(2);
				else if(prime(a[i]+a[i-1])==true&&a[1]==1) Try(i+1);
			} 
			check[j]=0;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    in();
    Try(1);
    cout<<b.size()<<endl;
    for(int i=0;i<b.size();i++){
    	for(int j=0;j<b[i].size();j++)
    		cout<<b[i][j]<<" ";
    	cout<<endl;
	}
	return 0;
}

