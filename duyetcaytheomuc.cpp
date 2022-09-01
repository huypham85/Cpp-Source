#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct node {
    int data;
    node *left;
    node *right;
};

node* newNode(int data){
    node* tmp = new node();
    tmp->data = data;
    tmp->left =tmp -> right = NULL;
    return tmp;
}

void Level_Order(node* root){
    queue<node*>q;
    if(root == NULL) return;
    q.push(root);
    while(!q.empty()){
        int size = q.size(); // size is number of node at the same level
        while(size > 0){ // pop all the node at same level
            node* tmp = q.front();
            q.pop();
            cout<<tmp->data<<" ";
            size--; 
            if(tmp->left!=NULL) q.push(tmp->left);
            if(tmp->right!=NULL) q.push(tmp->right);
        }
    }
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
            int u,v; char x;
            cin>>u>>v>>x;
            if(dd.find(u)==dd.end()){
                node* tmp = newNode(u);
                dd[u] = tmp;
                if(root == NULL) root = tmp;
            }
            node* Node = dd[u];
            node* subNode = newNode(v);
            if(x=='R') Node->right = subNode;
            else Node->left = subNode;
            dd[v] = subNode;
        }
        //cout<<root->data<<endl;
        Level_Order(root);
        cout<<endl;
    }
    return 0;
}