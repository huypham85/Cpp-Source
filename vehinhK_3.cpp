#include<stdio.h>
//using namespace std;
typedef long long ll;

int main(){
    int n;
    scanf("%d", &n);
    int value=1;
    for(int i=1;i<=n;i++){
        int x=i;
        for(int j=1;j<=i-1;j++){
            printf("%4c",' ');
        }
        int tmp=value;
        printf("%4d", value);
        for(int j=1;j<=n-i;j++){
            tmp+=x;
            x++;
            printf("%4d", tmp);
        }
        value=value+i+1;
        printf("\n");
    }
    
    return 0;
}