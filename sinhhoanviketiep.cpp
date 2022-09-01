#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+2];
        for(int i=0;i<n;i++) cin>>a[i];
        int i=n-2;
        while(a[i]>a[i+1]&&i>=0) i--;
        if(i<0){
            for(int j=0;j<n;j++) cout<<j+1<<" ";
            cout<<endl;
        }
        else{
            for(int j=n-1;j>=0;j--){
				if(a[j]>a[i]){
					swap(a[j], a[i]);
					sort(a+i+1, a+n);
                    for(int k=0;k<n;k++) cout<<a[k]<<" ";
                    cout<<endl;
                    break;
				}	
            }
        }
    }
    
    return 0;
}