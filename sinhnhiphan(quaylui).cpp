#include <stdio.h>
int bin[20];
int n;
int nhap () {
    int len;
    scanf ("%d", &len);
    return len;
}
void khoitao () {
    for (int i=0; i<n; i++) {
        bin[i]=0;
    }
}
void in () {
    for (int i=0; i<n; i++) {
        printf ("%d", bin[i]);
    }
}
void sinh (int i) {
    if (i>=n) {
        in ();
        printf ("\n");
    } else {
        for (int j=0; j<=1; j++) {
            bin[i]=j;
            sinh (i+1);
        }
    }
}
int main () {
    n=nhap ();
    khoitao ();
    sinh (0);
    return 0;
}

