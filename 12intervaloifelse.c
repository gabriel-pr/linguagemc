#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	scanf("%d",&num);
	
	if(num>10)
	{
		if(num<50)
		{
			printf("Numero maior que 10 e menor que 50.");
		}
		else
		{
			printf("Numero maior que 10 e maior que 50.");
		}
	}
	else
	{
		printf("Numero menor que 10 e menor que 50.");
	}
}
