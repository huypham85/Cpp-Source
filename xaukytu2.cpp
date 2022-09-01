#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int k;
        string s;
        cin>>k>>s;
        int check[100]={0};
        int maxx =0;
        for(int i=0;i<s.size();i++){
            check[s[i]]++;
            if(maxx<check[s[i]]) maxx = check[s[i]];
        }
        if((maxx-1)*(k-1)>s.size()-maxx) cout<<"-1"<<endl;
        else cout<<"1"<<endl;
    }
    return 0;
}