#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct so{
    int val;
    int cnt;
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<so>q; // dung queue de push tat ca cac truong hop co the xay ra
        q.push({n,0});
        while(1){
            so tmp = q.front();
            q.pop();
            if(tmp.val==1){
                cout<<tmp.cnt<<endl;
                break;
            }
            if(tmp.val%3==0){
                q.push({tmp.val/3,tmp.cnt+1});
            }
            if(tmp.val%2==0){
                q.push({tmp.val/2,tmp.cnt+1});
            }
            q.push({tmp.val-1,tmp.cnt+1});
        }
    }
    return 0;
}