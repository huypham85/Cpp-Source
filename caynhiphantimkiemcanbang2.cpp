#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int>Tree,a;
int n;
void init(){
    Tree.clear();
    Tree.resize(4*n+5,-1);
    a.clear();
    a.resize(n);
}

//function to build tree according to PreOrder Traversal
void BuildTree(int l, int r, int i){
    if(l>r) return;
    int mid = (l+r)/2; // root is always the mid of array
    Tree[i]=a[mid]; // root
    // every root has 2 child rood
    BuildTree(l, mid-1, i*2); // build child root in the left
    BuildTree(mid+1,r, i*2+1); // build child root in the right
}

void Show(int i){
    if(Tree[i]==-1) return; // base case
    cout<<Tree[i]<<" ";
    Show(i*2);
    Show(i*2+1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        init();
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());
        BuildTree(0, n-1, 1);
        Show(1);
        cout<<endl;
    }
    return 0;
}   