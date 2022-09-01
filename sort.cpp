#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,l=9999999,r=-1;
int a[10000000],b[10000000];
int bs(int value, int left, int right){
    while(left<=right){
        int mid=(left+right)/2;
        if(a[mid]==value) return mid;
        else if(a[mid]<value) left=mid+1;
        else if(a[mid]>value) right=mid-1;
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    sort(b, b+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            l=min(l, i);
            r=max(r, i);
        }
    }
    cout<<l+1<<" "<<r+1;
    return 0;
}