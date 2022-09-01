#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        cout<<s<<" ";
        while(next_permutation(s.begin(),s.end())){
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return 0;
}