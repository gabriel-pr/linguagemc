#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	scanf("%d",&num);
	
	if(num>500 && num<1000)
	{
		printf("Numero dentro do intervalo.");
	}
	else
	{
		printf("Numero fora do intervalo.");
	}
}
