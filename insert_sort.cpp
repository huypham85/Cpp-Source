#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int a[10000];
void out(){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
        int key=a[i];
        for(int j=i-1;j>=0;j--){
            if(a[j]>key) swap(a[j+1],a[j]);
        }
        out();
    }
    return 0;
}