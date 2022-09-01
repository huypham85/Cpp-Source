#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n,k;
int a[10000007];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>k;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==k){
                cout<<i+1<<endl;
                break;
            }
        }
        //int tmp = binary_search(0, n-1, k);
        //sort(a.b, a.end());
        //cout<<tmp<<endl;
    }
    return 0;
}