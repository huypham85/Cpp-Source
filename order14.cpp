#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n;
vector<int>a;
vector<int>mark(1000006);
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        mark.clear();
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>b;
        b=a;
        sort(a.begin(), a.end());
        int maxx = a[n-1];
        for(int i=0;i<n;i++){
            if(a[i]!=maxx){
                int index = (upper_bound(a.begin(), a.end(), a[i])-a.begin());
                //cout<<index<<endl;
                mark[a[i]]=a[index];
            }   
        }
        for(int i=0;i<n;i++){
            if(b[i]==maxx) cout<<"_"<<" ";
            else cout<<mark[b[i]]<<" ";
        }
        cout<<endl;
    }
    return 0;
}