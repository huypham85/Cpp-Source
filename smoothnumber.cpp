#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int l, r;
int a[10000]={0};
vector<int>res;
vector<int>ans;
bool check(int i){
    if(i>0){
        for(int j=0;j<i;j++){
            if(a[j]!=a[j+1]-1) return false;
        }
    }
    return true;
}
int num(int i){
    int p=0;
    for(int x=0;x<=i;x++){
        p=p*10+a[x];
    }
    return p;
}

void Try(int i){
    for(int j=i+1;j<=9;j++){
        a[i]=j;
        if(check(i)==true){
            int tmp=num(i);
            //cout<<tmp<<endl;
            res.push_back(tmp);
        }   
        Try(i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>l>>r;    
    Try(0);
    sort(res.begin(), res.end());
    for(int i=0;i<res.size();i++){
        if(res[i]>=l&&res[i]<=r) ans.push_back(res[i]);
    }
    cout<<ans.size()<<endl;
    cout<<"[";
    for(int i=0;i<ans.size();i++){
        if(i!=ans.size()-1) cout<<"["<<ans[i]<<"]"<<","<<" ";
        else cout<<"["<<ans[i]<<"]";
    }
    cout<<"]";
    return 0;
}