#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct data{
    int val, cnt;
};

int Solve(int n){
    queue<data>q;
    set<int>Set;// kiem tra moi phan tu chi dc luu 1 lan
    q.push({n,0});
    Set.insert(n);
    while(!q.empty()){
        data tmp = q.front();
        q.pop();
        if(tmp.val==1) return tmp.cnt;
        if(tmp.val-1==1) return tmp.cnt+1;
        if(tmp.val-1>0 && Set.find(tmp.val-1)==Set.end()){
            q.push({tmp.val-1,tmp.cnt+1});
            Set.insert(tmp.val-1);
        }
        for(int i=2;i<=sqrt(tmp.val);i++){ // duyet cac uoc cua n
            if(tmp.val%i==0){
                if(Set.find(tmp.val/i)==Set.end()){
                    q.push({tmp.val/i,tmp.cnt+1});
                    Set.insert(tmp.val/i);
                }
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<Solve(n)<<endl;
    }
    return 0;
}