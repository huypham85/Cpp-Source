#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
node* root; // root of the tree

bool isLeft(node* root, int val){
    if(val<root->data) return true;
    return false;
}

bool isRight(node* root, int val){
    if(val>root->data) return true;
    return false;
}

node* Insert(node* root,int val){
    if(root==NULL){ // base case
        root = new node();
        root->data = val;
        root->left = root->right = NULL;
        return root;
    }
    if(isLeft(root,val)){
        root->left = Insert(root->left,val);
    }
    if(isRight(root,val)){
        root->right = Insert(root->right,val);
    }
    return root;
}

void show(node* root){ //post order traversal
    if(root==NULL) return;
    show(root->left);
    show(root->right);
    cout<<root->data<<" ";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        root = NULL; // init root
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            root = Insert(root, val);
        }
        show(root);
        cout<<endl;
    }
    return 0;
}