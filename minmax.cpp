#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int m, s;
    cin>>m>>s;
    if(m==1&&s==0){
        cout<<0<<" "<<0;
        return 0;
    }
    if(s==0||s>9*m){
        cout<<"-1"<<" "<<"-1";
        return 0;
    }
    int a[m+1];
    int b[m+1];
    for(int i=0;i<m;i++){
        if(s>9){
            a[i]=9;
            s-=9;
        }
        else{
            a[i]=s;
            s=0;
        }
    }
    for(int i=0;i<m;i++) b[i]=a[i];
    if(b[m-1]==0){ // truong hop so cuoi so lon nhat la 0 6000->1005
        b[m-1]=1;
        for(int i=m-2;i>=0;i--){
            if(b[i]!=0){
                b[i]-=1;
                break;
            }
        }
    }
    
    for(int i=m-1;i>=0;i--) cout<<b[i];
    cout<<" ";
    for(int i=0;i<m;i++) cout<<a[i];
    return 0;
}