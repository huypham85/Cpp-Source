#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int t, n,a[10004];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int res=0;
        for(int i=0,j=n-1;i<=j;){ // xet 2 dau cua mang
            if(a[i]==a[j]){ // neu 2 gia tri bang nhau => tiep theo
                i++;
                j--;
            }
            else if(a[i]>a[j]){ // neu ben nao thieu thi cong them ben do
                j--;
                a[j]+=a[j+1];
                res++;
            }
            else{
                i++;
                a[i]+=a[i-1];
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}