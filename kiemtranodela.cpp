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

// check if all leaves are at the same level
bool checkUntil(node* root, int level, int *leafLevel){
    if(root == NULL) return true; // base case

    // when meet a leaf
    if(root->left == NULL&&root->right ==NULL){
        if(*leafLevel==0){
            *leafLevel=level;
            return true;
        }
        return (*leafLevel==level);
    }

    // if this node is not a leaf, check left and right subtrees
    return checkUntil(root->left,level+1,leafLevel) &&
         checkUntil(root->right,level+1,leafLevel);
}

bool check(node* Node){
    int level = 0;
    int leafLevel = 0;
    return checkUntil(Node, level,&leafLevel);
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
            
            if(dd.find(u)==dd.end()){ // if u hasn't appeared
                node* tmp = newNode(u);
                dd[u] = tmp; // mark that u has appeared
                if(root==NULL) root = tmp;
            }

            // allocate v to the left or right of node u
            node* Node = dd[u]; 
            node* subNode = newNode(v);
            if(x=='L') Node->left = subNode;
            else Node->right = subNode;
            dd[v] = subNode; // mark that v has appeared
        }
        if(check(root)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}