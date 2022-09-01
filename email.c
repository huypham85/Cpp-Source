#include<stdio.h>
#include<string.h>
int main()
{
    char s[50]={};
    gets(s);
    int i,j=0;
    for(i=0;i<strlen(s);i++)if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
    for(i=strlen(s);i>0;i--)s[i]=s[i-1];
    s[0]=' ';
    for(i=0;i<strlen(s);i++)
    {
        if(s[i] == ' ' && s[i+1] != ' ')
        {
            printf("%c",s[i+1]);
            j=i+2;
        }
    }
    while(s[j]!=' '&&s[j]!='\0'&&j<=strlen(s))
		printf("%c",s[j++]);
    printf("@ptit.edu.vn");
}