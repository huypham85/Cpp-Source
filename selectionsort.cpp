#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int a[10000];
void out(){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sel_sort(){
    int min_id;
    for(int i=0;i<n-1;i++){
        min_id=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_id]) min_id=j;
        }
        swap(a[i],a[min_id]);
        out();
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sel_sort();
    return 0;
}