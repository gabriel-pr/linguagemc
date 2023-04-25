#include<stdlib.h>
#include<stdio.h>

int main ()
{
	int peso;
	scanf("%d",&peso);
	if (peso < 50)
	{
		printf ("D23");
	}
	if (peso>50&& peso<60)
	{
		printf ("D26");
	}
	if (peso > 60 && peso<70)
	{
		printf ("D28");
	}
}
