#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n+1];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int dem =0;
        for(int i=0; i<n; i++){
            if(arr[i]==k) dem++;
        }
        cout<<dem<<endl;
    }
    return 0;
}