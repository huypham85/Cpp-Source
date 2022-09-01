#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n,a,r,i,j,b;
	char s[100006];
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d %d %s", &a, &r, &s);
		printf("%d ", i);
		int len =strlen(s);
		for(b=0; b<len; b++){
			for(j=1; j<=r; j++){
				printf("%c", s[b]);
			}
		}
		printf("\n");
	}
	return 0;
}

