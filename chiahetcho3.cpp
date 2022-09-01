#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t, n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        priority_queue<int>q;
        priority_queue<int, vector<int>, greater<int>>q1, q2;
        ll s=0;
        vector<int>res;
        cin>>n;
        for(int i=0;i<n;i++){
            int so;
            cin>>so;
            s+=so;
            q.push(so);
            if(so%3==1) q1.push(so);
            if(so%3==2) q2.push(so);
        }
        if((s%3==1&&q1.empty()&&q2.size()<2)||(s%3==2&&q2.empty()&&q1.size()<2)||(s%3==1&&q1.empty()&&q.size()<=2)||(s%3==2&&q2.empty()&&q.size()<=2)){
            cout<<"-1"<<endl;
        }
        else{
            int s1=-1,s2=-1;
            if(s%3==1){
                if(q1.empty()){
                    s1=q2.top();
                    q2.pop();
                    s2=q2.top();
                    q2.pop();
                }
                else s1=q1.top();
            }
            if(s%3==2){
                if(q2.empty()){
                    s1=q1.top();
                    q1.pop();
                    s2=q1.top();
                    q1.pop();
                }
                else s1=q2.top();
            }
            while(!q.empty()){
                int tmp=q.top();
                if(tmp!=s1&&tmp!=s2) res.push_back(tmp);
                else{
                    if(tmp==s1) s1=-1;
                    else if(tmp==s2) s2=-1;
                }
                q.pop();
            }
            for(int i=0;i<res.size();i++){
                cout<<res[i];
            }
            cout<<endl;
        }
    }
    return 0;
}