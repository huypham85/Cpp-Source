#include <bits/stdc++.h>
using namespace std;
int n;
int a[300][300];
char truoc[300][300];
bool visit[300][300];
struct Node
{
    int i,j;
};
void Trace ()
{
    int i=n,j=n;
    string res="";
    while(i!=1||j!=1)
    {
        if(truoc[i][j]=='D')
        {
            res+='D';
            i-=1;
        }
        else if (truoc[i][j]=='R')
        {
            res+='R';
            j-=1;
        }
    }
    reverse (res.begin(),res.end());
    cout<<res;
}
Node makenode (int i,int j)
{
    Node node;
    node.i=i;
    node.j=j;
    return node;
}
int di[]={1,0};
int dj[]={0,1};
void BFS (int i,int j)
{
    queue <Node> q;
    Node node;
    node.i=i; 
    node.j=j;
    q.push (node);
    visit[i][j]=1;
    while (!q.empty())
    {
        Node u=q.front();
        q.pop();
        if(u.i==n&&u.j==n)
        {
            Trace();
            return;
        }
        for(int i=0;i<2;i++)
        {
            int J=u.j+dj[i];
            int I=u.i+di[i];
            if(I>=1&&I<=n&&J>=1&&J<=n&&a[I][J]&&!visit[I][J])
            {
                q.push(makenode(I,J));
                visit[I][J]=1;
                if(i) truoc[I][J]='R';
                else truoc[I][J]='D';
            }
        }
    }
    cout<<"-1";
}
int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) 
        {
            cin>>a[i][j];
        }
    }
    BFS(1,1);
}