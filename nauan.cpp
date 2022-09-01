#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m;
int a[1000000], b[1000000], s[10000000];

void bsearch(int value, int left, int right){
    while (left<=right){
        int mid = (left+right)/2;
        if(s[mid]==value||value>s[mid-1]&&value<s[mid]){
            cout<<mid<<" ";
            return;
        }
        else if(value<s[mid]){
            right=mid-1;
        }
        else if(value>s[mid]){
            left=mid+1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    s[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    cin>>m;
    for(int i=1;i<m;i++){
        cin>>b[i];
    }
    for (int i = 1; i <= m; i++){
        bsearch(b[i], 1, n);
    }
    return 0;
}