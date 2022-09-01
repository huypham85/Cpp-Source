#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[100];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>b;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]!=0) b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        ll sum1=0,sum2=0;
        // tong nho nhat = tong so o vi tri chan + tong so o vi tri le
        for(int i=0;i<b.size();i++){
            if(i%2==0) sum1=sum1*10+b[i];
            else sum2 = sum2*10+b[i];
        }
        cout<<sum1+sum2<<endl;
    }
    return 0;
}