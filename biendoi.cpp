#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll t,a,b;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        ll dd=1;
        cin>>a>>b;
        if(a==b) cout<<"YES"<<endl;
        else if(a%2==0){
            cout<<"YES"<<endl;
        }
        else if(a%2!=0&&a>1){
            int tmp=a-1;
            if(((tmp*3)/2)==a) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
            }
        }
        else cout<<"NO"<<endl;
        
    }

    return 0;
}