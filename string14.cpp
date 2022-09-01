#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin.ignore();
        getline(cin, s);
        stringstream ss(s);
        int res=0;
        while(ss>>s) res++;
        cout<<res<<endl;
    }
    return 0;
}