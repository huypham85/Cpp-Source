// sang -> tao thanh cac canh cua do thi -> duyet bfs tim duong di ngan nhat

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll isPrime[100000];
vector<ll> ke[10000];
vector<ll> a; // mang cac so nguyen to
void sieve(){
    for(ll i=2;i<=9999;i++){
        if(isPrime[i]==0){
            for(ll j=i*i;j<=9999;j+=i){
                isPrime[j]=1;
            }
        }
    }
    for(ll i=1000;i<9999;i++){
        if(isPrime[i]==0) a.push_back(i);
    }
    // for(int i=0;i<a.size();i++) cout << a[i] <<" ";
    // cout<<endl;
}

// check neu chi khac nhau 1 chu so
bool check(ll x, ll y){
    ll d=0;
    while(x&&y){
        if((x%10)!=(y%10)) d++;
        x/=10;
        y/=10;
    }
    return d==1;
}

void init_graph(){
    for(int i=0;i<10000;i++){
        ke[i].clear();
    }
    // for(int i=0;i<a.size();i++) cout << a[i] <<" ";
    // cout<<endl;
    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
            if(check(a[i],a[j])){
                ke[a[i]].push_back(a[j]);
                ke[a[j]].push_back(a[i]);
            }
        }
    }
}
 
ll visited[100000];
ll dem[100000]; // mang dem so buoc da di
ll bfs(ll x,ll y){
    queue<ll>q;
    q.push(x);
    dem[x]=0;
    ll res = 99999999;
    while(q.size()>0){
        x = q.front();
        q.pop();
        visited[x]=1;
        if(x==y) return dem[x];
        // if(x==y){
        //     res = min(res, dem[x]);
        // }
        for(ll i=0;i<ke[x].size();i++){
            ll v = ke[x][i];
            if(visited[v]==0){
                q.push(v);
                dem[v]=dem[x]+1;
                visited[v]=1;
               // cout<<dem[v]<<endl;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    sieve();
    init_graph();
    while(t--){
        ll x, y;
        cin>>x>>y;
        //memset(isPrime,0,sizeof(isPrime));
        memset(visited,0,sizeof(visited));
        memset(dem,0,sizeof(dem));
        // for(int i=0;i<ke[x].size();i++) cout<<ke[x][i]<<" ";
        // cout<<endl;
        cout<<bfs(x,y)<<endl;
    }
    return 0;
}