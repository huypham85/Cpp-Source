#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;
int ktra(int i)
{
    if (i< 2)    
        return 0;
    for (int j = 2; j <= sqrt(i); j ++)
    {
        if ((i)%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
	int i;
	char s[100006];
	fgets(s,100006,stdin);
	for(i=0;i<(strlen(s)-1);i++){
		ktra(i);
		if(ktra(i)==1)
		s[i]='*';
	}
	printf("%s", s);
	return 0;
}

