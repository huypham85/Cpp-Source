#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int res_chan=0;
        int res_le=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0) res_chan=res_chan+(s[i]-'0'); // tong o cac vi tri chan
            else res_le=res_le+(s[i]-'0'); // tong o cac vi tri le
        }
        if((res_chan-res_le)%11==0) cout<<"1"<<endl; 
        else cout<<'0'<<endl;
    }
    return 0;
}