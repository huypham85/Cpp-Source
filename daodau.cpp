#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n,k,i;
    scanf("%d%d", &n, &k);
    int a[n+1];
    for(int i=1;i<=n;i++) 
		scanf("%d", &a[i]);
    sort(a+1,a+n+1);
    long long kq=0;
    if(a[1]<0){
        for(i=1;i<=n;i++){
            if(a[i]<0 && i<=k)
				a[i]*=-1;
            else break;
        }
        sort(a+1,a+n+1);
        if(k-i+1>0 && (k-i+1)%2!=0) 
			a[1]*=-1;
    }
    else {
        if(k%2!=0) 
			a[1]*=-1;
    }
    for(i=1;i<=n;i++){
        kq+=a[i];
    }
    printf("%lld", kq);
}
