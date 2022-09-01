#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
struct Job{
    int id, dl, pr;
};
bool cmp(Job a, Job b){
    return a.pr>b.pr;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        Job a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i].id>>a[i].dl>>a[i].pr;
        }
        sort(a,a+n,cmp);
        int res=0;
        int count =0;
        int slot[1111]={0};
        for(int i=0;i<n;i++){
            while(slot[a[i].dl]==1&&a[i].dl>0) a[i].dl--;
            if(slot[a[i].dl]==0&&a[i].dl>0){
                slot[a[i].dl]=1;
                res+=a[i].pr;
                count++;
            }
        }
        cout<<count<<" "<<res<<endl;
    }
    return 0;
}