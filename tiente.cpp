#include<bits/stdc++.h>
using namespace std;
#define MAX 100

struct edg{
    int h,id, n1,n2;    
};

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}


class DoThi{
    int n;
    int A[MAX][MAX], ne, aTree[MAX][MAX], dh;
    edg edgList[MAX], edgTree[MAX];
    public:
    vector<pair<int, int> >res;
    int begin;
    bool chuaXet[MAX];
    void readData();
    void init();
    
    void DFSPrint(int u);
    
    void DFS(int u);
    
    void sort();
    
    void kruskal();
    
    
};


void DoThi::readData(){
    cin >> n >> begin;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j<=n;j++){
            cin >>A[i][j];
            if(A[i][j] > 0 && i < j){
                ne++;
                edgList[ne].h = A[i][j];
                edgList[ne].id = ne;
                edgList[ne].n1 = i;
                edgList[ne].n2 = j;
            }
        }
    }
}

void DoThi::init(){
    for(int i=1;i<=n;i++){
        chuaXet[i] = true;
    }
}

void DoThi::DFSPrint(int u){
    chuaXet[u] = false;
    for(int i = 1; i <= n; i++){
        if(A[u][i] != 0 && chuaXet[i] == true){
            cout << min(u,i) << ' ' << max(u,i) << endl;
            DFS(i);
        }
    }
}

void DoThi::DFS(int u){
    chuaXet[u] = false;
    for(int i = 1; i <= n; i++){
        if(aTree[u][i] == 1 && chuaXet[i] == true){
            DFS(i);
            
        }
    }
}

void DoThi::sort(){
    for(int  i = 1; i<=ne;i++){
        for(int j=ne;j>=i+1;j--){
            if(edgList[j].h < edgList[j-1].h){
                edg tmp = edgList[j];
                edgList[j] = edgList[j-1];
                edgList[j-1] = tmp;
            }
        }
    }
}

void DoThi::kruskal(){
    int net = 0;
    for(int i = 1; i <=n;i++){
        for(int j=1;j<=n;j++){
            aTree[i][j] = 0;
        }
    }
    
     dh = 0;
    sort();
    for(int i = 1;i<=ne;i++){
        int n1 = edgList[i].n1;
        int n2 = edgList[i].n2;
        init();
        DFS(n1);
        if(chuaXet[n2] == true){
            dh+=edgList[i].h;
            net++;
            edgTree[net].n1 = n1;
            edgTree[net].n2 = n2;
            aTree[n1][n2] = 1;
            aTree[n2][n1] = 1;
        }
    }
    
    if(net == n-1){
        cout << "dH = " << dh <<endl;
        for(int i=1;i<=net;i++){
            res.push_back({edgTree[i].n1, edgTree[i].n2});
        }
    }
    sort(res.begin(), res.end(), cmp);

    for(pair<int, int> p : res){
        cout << p.first << ' ' << p.second << endl;
    }
    
    
    
}



int main(){
    
    DoThi G;
    G.readData();
    G.init();
    G.DFSPrint(G.begin);
    G.kruskal();
    
    
    return 0;
}