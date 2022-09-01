#include<stdio.h>
#include<math.h>

int Snt(int n)
{
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

int Check(int n)
{
    int a[100000];
    int len = 0;
    while(n)
    {
        a[len++] = n%10;
        n /= 10;
    }
    int check1 = 0;
    int check2 = 0;
    for(int i = 0; i < len-1; i++)
    {
        if(a[i] > a[i])
        {
            check1 = i;
        }
        else if(a[i] < a[i]) check2 = i;
    }
    if(check1 == 0 || check2 == 0) return 1;
    else return 0;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i<= b; i++)
    {
        if(Snt(i) == 1 && Check(i) == 1) printf("%d ",i);
    }

}