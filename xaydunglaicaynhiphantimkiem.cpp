#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};

node* root; 
bool isLeft(node* root, int val){
    return val < root->data;
}

bool isRight(node* root, int val){
    return val > root->data;
}

node* Insert(node* root, int val){
    if(root == NULL){
        root = new node();
        root->data= val;
        root->left=root->right = NULL;
        return root;
    }
    if(isLeft(root, val)){
        root->left = Insert(root->left, val); 
    }
    if(isRight(root, val)){
        root->right = Insert(root->right, val); 
    }
    return root;
}

void show(node *root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    show(root->left);
    show(root->right);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        root = NULL;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int so;
            cin>>so;
            root = Insert(root, so);
        }
        show(root);
        cout<<endl;
    }
    return 0;
}