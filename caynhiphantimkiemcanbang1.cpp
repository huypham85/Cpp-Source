#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int>a;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());
        int index;
        if(n%2==0){
            index = a.size()/2-1;
        }
        else index = a.size()/2;
        
        //cout<<index<<endl;
        cout<<a[index]<<endl;
    }
    return 0;
}