#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int num, resto5, resto7;
	
	scanf ("%d" ,&num);
	
	resto5=num%5;
	resto7=num%7;
	
	if(resto5== 0 )
	{
		printf ("o numero e multiplo de 5\n");
	}
	else
	{
		printf ("o numero nao e multiplo de 5\n");
	}
	
	if (resto7== 0 )
	{
		printf ("o numero e multiplo de 7\n");
	}
	else
	{
		printf ("o numero nao e multiplo de 7\n");
	}
	
}
