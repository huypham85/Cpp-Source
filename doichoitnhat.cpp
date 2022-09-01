// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;

// struct So
// {
//     int value;
//     int index;
// };
// bool cmp(So a, So b){
//     return a.value<b.value;
//     if(a.value==b.value) return a.index<b.index;
// }
// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);cout.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         So a[n+1];
//         for(int i=0;i<n;i++){
//             cin>>a[i].value;
//             a[i].index=i;
//         }
//         sort(a, a+n, cmp);
//         int res=0;
//         for(int i=0;i<n;i++){
//             while(a[i].index!=i){
//                 res++;
//                 swap(a[i], a[a[i].index]);
//             }
//         }
//         cout<<res<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int a[10000];
// void out(){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
void sel_sort(){
    int min_id;
    int res=0;
    for(int i=0;i<n-1;i++){
        min_id=i;
        int dd=0;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_id]){
                min_id=j;
                dd=1;
            }
        }
        if(dd==1){
            swap(a[i],a[min_id]);
            res++;
        }
    }
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sel_sort();
    }
    
    return 0;
}