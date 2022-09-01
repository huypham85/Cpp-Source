#include<stdio.h>
#include<math.h>
#include<string.h>
int soluong(char hoten[]){
	int soluong =0;
	while(hoten[soluong] != '\0'){
		soluong++;
	}
	return soluong;
}
void daonguocchuoi(char s[]){
	int len = soluong(s);
	char a[len];
	for(int i=0; i<len; i++)
		a[i]=s[len-1-i];
	for(int i=0; i<len; i++)
		s[i]= a[i];
}
void saochep(char dich[], char nguon[]){
	int len = soluong(nguon);
}
int main(){
	int i;
	char dich[10006];
	char nguon[10006]="Viet Nam";
	strcpy(dich, nguon);
	int len = strlen(dich);
	printf("%s %d", dich, len);
	return 0;
}

