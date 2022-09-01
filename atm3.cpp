#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t, n,dem,stop=0;
    int a[]={500, 200, 100, 50, 20, 10, 5, 2, 1};
    cin>>t;
    while(t--){
    	cin>>n;
    	stop=0;
    	int res=n;
    	dem=0;
    	for(int i=0;i<9;i++){
    		dem+=res/a[i];
    		res%=a[i];
		}
		cout<<dem<<endl;
	}
    
	return 0;
}

