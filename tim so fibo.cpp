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
			//a.clear();
			for(i=0;i<n;i++){
				cin>>vt[i];
			}
			for(i=0;i<vt.size();i++){
				int d=0;
				for(j=0;j<80;j++){
					if(vt[i]==fibo[j])
					d++;
				}
				if(d!=0) a.push_back(vt[i]);
			}	
			for(i=0;i<a.size();i++){
				cout<<a[i]<<" ";
			}
		}
		
		return 0;
	}

