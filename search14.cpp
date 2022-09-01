#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n, k;
int b[1000006];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        map<int,int>a;
        int dd=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            a[b[i]]++;
            if(a[b[i]]==2){
                cout<<b[i]<<endl;
                dd=1;
                break;
            }
        }
        if(dd==0)
        cout<<"-1"<<endl;
    }
    return 0;
}