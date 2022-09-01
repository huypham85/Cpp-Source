#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};

node* newNode(int val){
    node* tmp = new node();
    tmp->data = val;
    tmp->left = tmp->right = NULL;
    return tmp;
}

bool isFullTree(node* root){
    if(root == NULL) return false;
    if(root->left==NULL&&root->right==NULL) return true;
    if(root->left == NULL|| root->right==NULL) return false;
    return isFullTree(root->left) && isFullTree(root->right);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        node* root = NULL;
        map<int,node*>dd;
        for(int i=0;i<n;i++){
            int u, v; char x;
            cin>>u>>v>>x;
            if(dd.find(u)==dd.end()){
                node* tmp = newNode(u);
                dd[u] = tmp;
                if(root == NULL) root = tmp;
            }
            node* Node = dd[u];
            node* subNode = newNode(v);
            if(x=='L') Node->left = subNode;
            else Node->right = subNode;
            dd[v] = subNode;
        }
        if(isFullTree(root)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}