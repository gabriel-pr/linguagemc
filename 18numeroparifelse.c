#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, resto;
	
	scanf("%d",&num);
	
	resto=num%2;
	
	if(resto==0)
	{
		printf("par");
	}
	else
	{
		printf("impar");
	}
}
