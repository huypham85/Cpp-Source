#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,chan=0, le=0;
int a[100000];
vector<int>sochan,sole;
void nhap(){
    for(int i=0;i<n;i++) cin>>a[i];
}
void solve(){
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            chan++;
            sochan.push_back(a[i]);
        }
        else{
            le++;
            sole.push_back(a[i]);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    nhap();
    solve();

    cout<<le<<" ";
    for(int i=0;i<sole.size();i++) cout<<sole[i]<<" ";

    cout<<endl;
    cout<<chan<<" ";
    for(int i=0;i<sochan.size();i++) cout<<sochan[i]<<" ";
    return 0;
}