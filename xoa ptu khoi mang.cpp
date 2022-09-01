#include<stdio.h>

int main(){
	int a[] = {0 ,5 , 7 , 8 , -2 , 9 , 10};
    int n = 7;
    int vitri = 3;
 
    for(int i=vitri ; i<n ;i++){
        a[i] = a[i+1];
    }
   
    for(int i=0;i<n-1;i++) printf("%d " , a[i]);

	return 0;
}

