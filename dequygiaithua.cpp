#include <stdio.h>
 
long long giaithua (int n) {
    if (n>1) return giaithua (n-1)*n;
    else return 1;
}
int main(){
    int n;
    do {
        scanf ("%d", &n);
        if (n==0)
			break;
        printf ("%lld\n", giaithua (n));
    } 
	while(n);
    return 0;
}


