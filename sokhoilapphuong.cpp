#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
map<ll,bool> check;
int a[20];
ll res;
vector<int>so;

void Try(int i, int n){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n-1){
            ll tmp =0;
            for(int l=0;l<n;l++){
                if(a[l]==1){
                    tmp = tmp *10+so[l];
                }
            }
            if(tmp>res&&check[tmp]==true&&tmp!=0) res = tmp;
        }
        else Try(i+1, n);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    for(ll i=1;i<=100000;i++){
        check[i*i*i]=true;
    }
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        res=-1;
        so.clear();
        while(n){
            so.push_back(n%10); 
            n/=10;
        }
        reverse(so.begin(), so.end());
        //cout<<so.size()<<endl;
        Try(0,so.size());
        cout <<res<<endl;
    }   
    return 0;
}