//ĐƯỜNG ĐI THEO DFS VỚI ĐỒ THỊ CÓ HƯỚNG

#include<bits/stdc++.h>

using namespace std;
#define ll long long

int u,v, s, t, vis[1005],truoc[1005];
vector<int> ke[1005];

void re_init(){
    for(int i = 1; i <= u; i++)
        ke[i].clear();
    memset(vis, 0, sizeof(vis));
    memset(truoc,0,sizeof(truoc));
}

void dfs(int u){
    stack <int> st;
    st.push(u);
    vis[u] = 1;
    while(!st.empty()){
        //if(vis[t]==1) return;
        int tmp = st.top();
        st.pop();
        for(int i = 0; i < ke[tmp].size(); i++){
            if(vis[ke[tmp][i]] == 0){
                vis[ke[tmp][i]] = 1;
                st.push(tmp);
                st.push(ke[tmp][i]);
                truoc[ke[tmp][i]] = tmp;
                break;
            }
        }
        if(truoc[t] != 0) return;
    }
}

void pathdfs(){
    dfs(s);
    if(truoc[t] == 0) cout << -1 << endl;
    else{
        stack <int> result;
        result.push(t);
        int a = truoc[t];
        while(a!=s){
            result.push(a);
            a = truoc[a];
        }
        result.push (s);
        while(!result.empty()){
            cout << result.top() << " ";
            result.pop();
        }
        cout << endl;
    }
    
}

void solve(){
    re_init();
    cin >> u >> v >> s >> t;
    for(int i = 1; i <= v; i++){
        int a, b;
        cin >> a >> b;
        ke[a].push_back(b);
    }
    for(int i = 1; i <= u; i++){
        sort(ke[i].begin(), ke[i].end());
    }
    pathdfs();
}

int main(){
    int test;
    cin >> test;
    while(test --){
        solve();
    }
    return 0;
}