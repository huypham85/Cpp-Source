#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<k;i++) cin>>a[i];
        int d=1;
        for(int i=k-2;i>=0;i--){
            if(i==0 && a[i+1]-a[i]==1 && a[i]!=1){
                    a[i]--;
                    for(int j=i+1;j<k;j++) a[j]=n-k+j+1;
                    d=0;
                    break;
            }
            else if(a[i+1]-a[i] > 1){
                    a[i+1]--;
                    for(int j=i+2;j<k;j++) a[j]=n-k+j+1;
                    d=0;
                    break;
            }
        }
        if(d) for(int i=0;i<k;i++) a[i]=n-k+i+1;
        for(int i=0;i<k;i++) cout<<a[i]<<' ';
        cout<<endl;
    }


    return 0;
}