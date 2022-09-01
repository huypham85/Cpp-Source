
#include <stdio.h>
#include <math.h>
using namespace std;
#define pi atan(1)*4
int main()
{
    int n;
    scanf("%d",&n);
    printf("%.6f\n",n*n*pi);
    printf("%.6f",(float)n*n*2);
}
