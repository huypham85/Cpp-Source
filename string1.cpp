#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t, k;
    cin>>t;
    while(t--){
        string s;
        cin.ignore();
        cin>>s;
        cin>>k;
        map<int,int>a;
        for(int i=0;i<s.size();i++){
            a[(int)s[i]]++;
        }
        int l= 'a';
        int r='z';
        int dem=0;
        for(int i=l;i<=r;i++){
            if(a[i]==0) dem++;
        }
        if(dem>k) cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
    return 0;
}