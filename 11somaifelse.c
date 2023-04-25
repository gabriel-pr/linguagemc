#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int num1, num2, soma;
	
	scanf("%d",&num1);
	scanf("%d",&num2);
	
	soma=num1+num2;
	
	if(soma>100)
	{
		printf("maior que 100");
	}
	else
	{
		printf("menor que 100");
	}
}
