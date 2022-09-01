#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n , x;
//int a[100005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n>>x;
        vector<int>a(n);
        int dd=0;
        for(int i =0 ;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());
        for(int i=0;i<n;i++){
            if(binary_search(a.begin(), a.end(),a[i]-x)==true){ // binary_search chi dung duoc voi vector
                cout<<"1"<<endl;
                dd=1;
                break;
            }
        }
        if(dd==0) cout<<"-1"<<endl;
    }
    return 0;
}