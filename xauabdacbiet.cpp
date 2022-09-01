#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n,k;
string s = "";
int a[100];
vector<string> res;
void out(){
    for(int i=1;i<=n-k;i++){
        if(i==1&&a[i]==1){
            string tmp = "";
            tmp+=s;
            for(int j=1;j<=n-k;j++){
                if(a[j]!=0) tmp+="B";
                else tmp+="A";
            }
            res.push_back(tmp);
        }
        if(i==n-k&&a[i]==1){
            string tmp = "";
            for(int j=1;j<=n-k;j++){
                if(a[j]!=0) tmp+="B";
                else tmp+="A";
            }
            tmp+=s;
            res.push_back(tmp);
        }
        if(a[i]&&a[i-1]&&i>1){
            string tmp ="" ;
            for(int j=1;j<=n-k;j++){
                if(j==i) tmp+=s;
                if(a[j]!=0) tmp+="B";
                else tmp+="A";
            }
            res.push_back(tmp);
        }
    }
    cout<<" ";
}

void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n-k){
            out();
        }
        else Try(i+1);
    }
    

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<k;i++) s+="A";
        Try(1);
        sort(res.begin(),res.end());
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++) cout<<res[i]<<endl;
    }
    return 0;
}