#include <stdio.h>

int a[10000][10000];
int main()
{
    int m, n, l, r;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    }
    scanf("%d%d", &l, &r);
    int tmp[10000];
    for (int i = 1; i <= n; i++)
    {
        tmp[i] = a[l][i];
        a[l][i] = a[r][i];
        a[r][i] = tmp[i];
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}