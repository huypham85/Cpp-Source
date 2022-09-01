#include<stdio.h>

int main(){
    long long n, a ,b;
    scanf("%lld%lld%lld",&n,&a,&b);
    if(n%a==0 && n%b==0){
       printf("Co, tat ca!");}
    if(n%a==0 && n%b!=0){
       printf("Chi chia het cho %lld,", a);}
    if(n%a!=0 && n%b==0){
       printf("Chi chia het cho %lld.", b);}
    if(n%a!=0 && n%b!=0){
       printf("Khong chia het cho so nao ca.");}
	return 0;
}

