#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max7 = n/7;
        int max4=0;
        int max7_tmp=0;
        bool ok =false;
        for(int i=0;i<=max7;i++){
            int tmp = n-i*7;
            if(tmp%4==0){
                max4 = tmp/4;
                max7_tmp=i;
                ok = true;
            }
        }
        if(ok==false) cout<<"-1"<<endl;
        else{
            for(int i=1;i<=max4;i++) cout<<"4";
            for(int i=1;i<=max7_tmp;i++) cout<<"7";
            cout<<endl;
        }
    }
    return 0;
}