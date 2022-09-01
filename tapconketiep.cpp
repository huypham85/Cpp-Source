#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while (t--)
    {   
        int n,k;
        cin>>n>>k;
        int a[k+1];
        for(int i=0;i<k;i++) cin>>a[i];
        int i=k-1;
        while(a[i]==(n-k+i+1)&&i>=0) i--; 
        if(i<0){
            //cout<<"A"<<endl;
            for(int j=0;j<k;j++) cout<<n-k+j-1<<" ";
            cout<<endl;
        }
        else{
            //cout<<i<<endl;
            a[i]+=1;
            for(int j=i+1;j<k;j++) a[j]=a[j-1]+1;
            for(int j=0;j<k;j++) cout<<a[j]<<" ";
            cout<<endl;
        }
    }
    
    
    return 0;
}