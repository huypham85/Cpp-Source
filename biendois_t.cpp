#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct data{
    int val, cnt;
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int s, t;
        cin>>s>>t;
        int res=0;
        set<int>Set; // luu tat ca cac gia tri dung 1 lan
        queue<data>q;
        q.push({s,0});
        while(1){
            data tmp = q.front();
            q.pop();
            if(tmp.val==t){
                res=tmp.cnt;
                break;
            }
            if(tmp.val*2==t||tmp.val-1==t){
                res = tmp.cnt+1;
                break;
            }
            if(Set.find(tmp.val*2)==Set.end()&&tmp.val<t){ // neu ko tim thay trong Set gia tri tmp*2
                q.push({tmp.val*2,tmp.cnt+1});
                Set.insert(tmp.val*2);
            }
            if(Set.find(tmp.val-1)==Set.end()&&tmp.val-1>0){ // neu ko tim thay trong Set gia tri tmp-1
                q.push({tmp.val-1,tmp.cnt+1});
                Set.insert(tmp.val-1);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}