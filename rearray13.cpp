#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t , n, m;
int a[1000006], b[1000006], tanso[1000006];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            tanso[a[i]]++;
        }
        sort(a, a+n);
        int tmp=a[0]-1; // de khong trung phan tu nao
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(b[i]==a[j]){
                    cout<<a[j]<<" ";
                    a[j]= tmp;
                }
                if(b[i]<a[j]) break; // rut gon thoi gian
            }
            
        }
        for(int i=0;i<n;i++){
            if(a[i]!=tmp){
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}