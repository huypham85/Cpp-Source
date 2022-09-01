#include <stdio.h>
#include <math.h>

main()
{
	int i, n;
	float x, S, T, E;
	long M;
	printf("Nhap x: ");
	scanf("%f", &x);
ab:	do
	{
	printf("\nNhap n: ");
	scanf("%d", &n);
	  if(n < 1)
	  {
		  printf("\n N phai >= 1. Xin nhap lai !");
	  }

	}
	while(n < 1);
	E=exp(x);
	S = 1;
	T = 1;
	M = 1;
	i = 1;
	while (i<=n)
		{
			T = T * x;
			M = M * i;
			S = S + T/M;
			i++;
		} 
	if (E-S>0.00001||E-S<-0.00001)
	{
		printf("Sai so qua lon. Moi nhap lai n");
		goto ab;
	}
	printf("\nKet qua e^x là:  %0.5f", S);
	
	printf("\n Sai so cua phep tinh so voi e^x là: %f",E-S);
	
}

