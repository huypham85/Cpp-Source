#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n,p,s,sum;
int isPrime[202];
vector<int>prime;
vector<int>ans;
vector<vector<int>>res;
bool check(int x){
    if(x<2) return false;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}
// void Sieve(){
//     //memset(isPrime, 0, sizeof(isPrime));
//     for(int i=2;i<=s;i++){
//         if(check(i)==true&&i>p) prime.push_back(i);
//     }
// }
void Save(){
    res.push_back(ans);
    //ans.clear();
}
void Try(int i){
    if(sum>s) return;
    if(ans.size()==n&&sum==s){
        Save();
        return;
    }
    for(int j=i;j<s;j++){
        if(sum+j<=s&&check(j)==true){
            sum+=j;
            ans.push_back(j);
            Try(j+1);
            sum-=j;
            ans.pop_back();
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>p>>s;
        //Sieve();
        sum=0;
        ans.clear();
        res.clear();
        Try(p+1);
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++){
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}