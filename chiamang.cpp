#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, k,s;
int a[22];
int cnt =0;
bool visited[22];
bool check=false;

void Try(int sum, int cnt){
    if(check==true){
        return;
    }
    if(cnt==k){
        check=true;
        return;
    }
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
            visited[i]=true;
            if(sum==s){
                Try(0, cnt+1);
                return; // vi sum == s nen ko xet tiep
            }
            if(sum>s) return;
            if(sum<s){
                Try(sum+a[i], cnt);
   
            }
        }
        visited[i]=false;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        s=0;
        check=false;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            visited[i]=false;
            s+=a[i];
        }
        if(s%k!=0){ // tong mang phai chia het cho k thi moi chia dc thanh k phan
            cout<<"0"<<endl;
        }
        else{
            s/=k;
            //cout<<s<<endl;
            Try(0,0);
            if(check==true){
                cout<<"1"<<endl;
            }
            else cout<<"0"<<endl;
        }
    }
    return 0;
}