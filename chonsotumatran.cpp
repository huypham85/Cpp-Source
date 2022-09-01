#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[100][100], k, n;
int x[100];
bool check[100]={false};
vector<int>ans;
// sinh hoan vi de vet can cac truong hop
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!check[j]){
            x[i]=j;
            check[j]=true;
            if(i==n){
                int res = 0;
                for(int h = 1;h<=n;h++){
                    res+=a[h][x[h]];
                }
                if(res==k){
                    for(int h = 1;h<=n;h++)
                    ans.push_back(x[h]);
                }
            }
            else Try(i+1);
            check[j]= false;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        cin>>n>>k;
        ans.clear();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                cin>>a[i][j];
        }
        Try(1);
        cout<<ans.size()/n<<endl;
        for(int i=0;i<ans.size();i++){
            if(i%n==0&&i!=0) cout<<endl;
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}