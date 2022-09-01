#include <stdio.h>
    #include <math.h>
    int main()
    {
      int a, b, c, d;
      double root1, root2;
    
      scanf("%d%d%d", &a, &b, &c);
      d = b*b - 4*a*c;
      if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("VO SO NGHIEM");
                else
                    printf("VO NGHIEM");
            }
        else
            printf("%.2lf",(double)-c/b);
    }
    else {
      if (d>0) { 
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a);
    
        printf("%.2lf ", (double)root1);
        printf("%.2lf", (double)root2);
      }
      else if (d==0) {
          printf("%.2lf",(double)-b/(2*a));
      }
      else 
        printf("VO NGHIEM");
    }
      return 0;
    }