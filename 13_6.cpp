#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, k , a[1000];
vector<int>res;
void input(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void out(){
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
void Try(int i, int sum){
    res+=a[i];
    for(int j=i+1;j<n;j++) 
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    input();
    Try(0,0)
    return 0;
}