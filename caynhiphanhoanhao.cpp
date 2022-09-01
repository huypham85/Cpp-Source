#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};

node* newNode(int data){
    node* tmp = new node();
    tmp->data = data;
    tmp->left = tmp->right = NULL;
    return tmp;
}

int findDepth(node* root){
    int depth = 0;
    while(root!=NULL){
        depth++;
        root = root->left;
    }
    return depth;
}

bool isPerfectTree(node* root, int level, int d){
    if(root == NULL) return true;
    if(root->left==NULL&&root->right==NULL){
        return d == level+1;
    }
    if(root->left == NULL||root->right ==NULL) return false;
    return isPerfectTree(root->left, level+1, d) 
    && isPerfectTree(root->right, level+1, d);
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
        map<int, node*>dd;
        for(int i=0;i<n;i++){
            int u, v; char x;
            cin>>u>>v>>x;
            if(dd.find(u)==dd.end()){
                node* tmp = newNode(u);
                dd[u] = tmp;
                if(root == NULL) root = tmp;
            }
            node* tmp = dd[u];
            node* subNode = newNode(v);
            if(x=='L') tmp->left = subNode;
            else if(x=='R') tmp->right = subNode;
            dd[v] = subNode;
        } 
        int depth = findDepth(root);
        //cout<<depth<<endl;
        if(isPerfectTree(root,0,depth)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}