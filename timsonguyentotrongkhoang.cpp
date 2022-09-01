#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[100006];
int l, r;
vector<int>res;
void sieve(){
    for(int i=0;i<100006;i++) a[i]=0;
    a[0]=1;
    a[1]=1;
    for(int i=2;i<100006;i++){
        if(a[i]==0){
            for(int j=i*2;j<100006;j+=i){
                a[j]=1;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>l>>r;
    if(l>r) swap(l,r);
    sieve();
    for(int i=l+1;i<r;i++){
        if(a[i]==0) cout<<i<<" ";
    }
    return 0;
}