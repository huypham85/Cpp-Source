#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,maxx=0;
int a[100005],b[100005];
priority_queue<int, vector<int>, greater<int>>q;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int so;
        cin>>so;
        b[i]=a[i]+so;
    }
    sort(a, a+n);
    sort(b, b+n);   
    for (int i = 0; i < n; i++)
    {
        q.push(b[i]);
        while(!q.empty()&&a[i]>=q.top()) q.pop();
        int tmp=q.size();
        maxx=max(maxx, tmp);
    }
    cout<<maxx;
    return 0;
}