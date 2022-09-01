#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int>a,b;
int n,m;

// tim y > x => x^y > y^x ngoai tru 0,1,2,3,4  
int count(int x,int ex[]){
    if(x==0) return 0;
    if(x==1) return ex[0];
    vector<int>::iterator index;
    index = upper_bound(b.begin(),b.end(),x);
    int ans = m-(index-b.begin());
    if(x==2) ans = ans - (ex[3]+ex[4]);
    if(x==3) ans +=ex[2];
    ans += (ex[0]+ex[1]);
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        a.resize(n);
        b.resize(m);
        int ex[6] ={0};// ex[i] la so phan tu co gia tri = i, ngoai le cua bai toan
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++){
            cin>>b[i];
            if(b[i]<5) ex[b[i]]++;
        }
        sort(b.begin(),b.end());
        int res=0;
        for(int i=0;i<n;i++){
            //cout<<count(a[i],ex);
            res+=count(a[i],ex);
        }
        cout<<res<<endl;
    }
    return 0;
}