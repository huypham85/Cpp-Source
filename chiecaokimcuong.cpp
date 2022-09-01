#include<bits/stdc++.h>
using namespace std;
long long a[100000], b[1000][1000];
int main(){
long long n,m,k,i,j,h=0;
cin >> n >> m >> k;
for(i=1; i<=n; i++){
for(j=1; j<=m; j++){
b[i][j]=i*j;
}
}
for(i=1; i<=n; i++){
for(j=1; j<=m; j++){
a[h] = b[i][j];
h++;
}
}
sort(a+1,a+n*m+1);
cout << a[k];
}

