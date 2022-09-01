#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"@";
        char value='B';
        if(i!=1) cout<<value;
        for(int j=1;j<=(i-2);j++){
            value+=2;
            cout<<(value);
        }
        for(int j=1;j<=(i-2);j++){
            value -=2;
            cout<<(value);
        }
        if(i!=1)cout<<"@";
        cout<<endl;
    }
    return 0;
}