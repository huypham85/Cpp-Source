	#include<stdio.h>
	#include<math.h>
	#include<string.h>
	#include<iostream>
	#include<vector>
	#include<string>
	using namespace std;
	int main(){
		long long n,t,i,j;
		cin>>t;
		vector<long long>vt;
		vector<long long>a;
		long long fibo[93];
		fibo[0]=0;
		fibo[1]=1;
		fibo[2]=1;
		for(i=3;i<93;i++){
			fibo[i]=fibo[i-1]+fibo[i-2];
		}
		for(i=1;i<=t;i++){
			cin>>n;
			vt.resize(n);
			a.clear();
			for(int u=0;u<n;u++){
				cin>>vt[u];
			}
			for(int u=0;u<vt.size();u++){
				int d=0;
				for(j=0;j<80;j++){
					if(vt[u]==fibo[j])
					d++;
				}
				if(d!=0) a.push_back(vt[u]);
			}	
			for(int u=0;u<a.size();u++){
				cout<<a[u]<<" ";
			}
			cout<<endl;
		}
		
		return 0;
	}

