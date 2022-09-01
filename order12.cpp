#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        int maxx=0;
        map<int , int>a;
        for(int i=0;i<n;i++){
            int so;
            cin>>so;
            if(so>maxx) maxx=so;
            if(so>0) a[so]++;
        }
        for(int i=1;i<=maxx+1;i++){
            if(a[i]==0){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}