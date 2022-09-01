#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n, m ,k;
int a[1000006],b[1000006],c[1000006];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        vector<int>res;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        for(int i=0;i<k;i++){
            cin>>c[i];
        }
        int index_a=0;
        int index_b=0;
        int index_c=0;
        while(index_a<n&&index_b<m&&index_c<k){
            if(a[index_a]==b[index_b]&&a[index_a]==c[index_c]){
                res.push_back(a[index_a]);
                index_a++;
                index_b++;
                index_c++;
            }
            else{
                if(a[index_a]>=b[index_b]&&a[index_a]>=c[index_c]){
                    if(a[index_a]>b[index_b]) index_b++;
                    if(a[index_a]>c[index_c]) index_c++;
                }
                else if(b[index_b]>=a[index_a]&&b[index_b]>=c[index_c]){
                    if(b[index_b]>a[index_a]) index_a++;
                    if(b[index_b]>c[index_c]) index_c++;
                }
                else if(c[index_c]>=b[index_b]&&c[index_c]>=a[index_a]){
                    if(c[index_c]>b[index_b]) index_b++;
                    if(c[index_c]>a[index_a]) index_a++;
                }
            }
        }
        if(res.size()==0){
            cout<<"NO"<<endl;
        }
        else{
            for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}