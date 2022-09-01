#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>ke[100005];
bool vs[100006];
ll truoc[300006];
int n;
int res;
void Trace(int s, int e) {
	stack<int>st;
	st.push(e);
	int end=truoc[e];
	while(end != 0) {
		st.push(end);
		end=truoc[end];
	}
	cout<<st.size()<<'\n';
	while(!st.empty()) {
		cout<<st.top()<<' ';
		st.pop();
	}
}
void BFS(int s, int e) {
	queue<int>q;
	q.push(s);
	vs[s]=true;
	while(!q.empty()) {
		int u=q.front(); q.pop();
		if (u == e) {
			Trace(s,e);
			return;
		}
		for (int i=0;i<ke[u].size();i++) {
			int v=ke[u][i];
			if (!vs[v]) {
				vs[v]=true;
				truoc[v]=u;
				q.push(v);
			}
		}
	}
	cout<<-1<<endl;
}
int main(){
	int n, m;
	cin>>n>>m;
	int s,e;
	cin>>s>>e;
	while(m--) {
		int u,v;
		cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	BFS(s,e);
	return 0;
}




