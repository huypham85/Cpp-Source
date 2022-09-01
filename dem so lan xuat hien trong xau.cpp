#include<stdio.h>
#include<math.h>
#include<string.h>

void xuat( int a[], char str[] ){
	int dem=0;
	for(int i = 0; i< 26; i++ ){
		if(a[i]>0&&a[i]<=1)
			dem++;
	}
	if(dem%2==1) printf("CHAT WITH HER!");
	else printf("IGNORE HIM!");
}

void dem(char s[]){
	strupr(s);
	char str[26];
	strcpy(str,"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	int a[26] = {0};
	for(int i = 0; i< strlen(s); i++ )
		for(int j = 0; j < 26; j++ ){
			if( s[i] == str[j] ) 
				a[j] ++;
		}
	xuat(a, str);
}

void nhap(){
	char s[100006];
	fgets(s,100006,stdin);
	dem(s);
}

int main(){
	nhap();
	return 0;
}

