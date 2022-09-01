#include<stdio.h>

int n;
int main(){
    scanf("%d", &n);
    int value=1;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=value;j<=value+i-1;j++){
                printf("%d ", j);
            }
            printf("\n");
            value=value+i;
        }
        if(i%2==0){
            for(int j=value+i-1;j>=value;j--){
                printf("%d ", j);
            }
            printf("\n");
            value=value+i;
        }
    }
    return 0;
}