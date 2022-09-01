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

// bool isLeaf(node* Node){ // function to find if this node is a leaf(no subnode)
//     if(Node == NULL) return false;
//     if(Node->left == NULL && Node->right == NULL) return false; 
// }

void RightLeafSum(node* root, int* sum){
    if(root == NULL) return; // base case

    if(root->right!=NULL){
        if(root->right->left == NULL && root->right->right == NULL){ // if meet a leaf
            *sum+= root->right->data; // cuz root->right->data is a poiter so sum must be a pointer too
        }
    }
    RightLeafSum(root->left, sum);
    RightLeafSum(root->right,sum);
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
        for(int i=0; i<n;i++){
            int u, v; char x;
            cin>>u>>v>>x;
            if(dd.find(u)==dd.end()){
                node* tmp = newNode(u);
                dd[u] = tmp;
                if(root == NULL) root = tmp;
            }
            node* Node = dd[u];
            node* subNode = newNode(v);
            if(x=='L') Node->left =subNode;
            else Node->right =subNode;
            dd[v] = subNode;
        }
        int sum =0;
        RightLeafSum(root, &sum);
        cout<<sum<<endl;

    }
    return 0;
}