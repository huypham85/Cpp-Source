#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n,dem=0;
    cin>>n;
    int b[n+1];
    int a[n+1];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    for(int i=0;i<n;i++){
		b[i]=1;
	}
    for(int i=0;i<n;i++){
    	if(a[i]==0) continue;
    	else{
    		for(int j=i+1;j<n;j++){
	    		if(a[j]==a[i]){
	    			a[j]=0;
	    			b[i]++;
	    			b[j]--;
				}
			}
		}	
	}
	sort(b, b+n);
	/*for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;*/
	for(int i=0;i<n;i++){
		if(b[i]>0)
			dem++;
	}
    cout<<b[n-1]<<" "<<dem;
	return 0;
}

