#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Digite a opcao desejada:\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n5 - Delta\n");
	
	int op;
	float num1, num2, num3, resultado;
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
		{
				scanf("%f",&num1);
			scanf("%f",&num2);
			resultado= num1+num2;
			printf("Resultado: %.2f",resultado);
			break;
        }
		case 2:
		{
			scanf("%f",&num1);
			scanf("%f",&num2);
			resultado= num1-num2;
			printf("Resultado: %.2f",resultado);
			break;
		}
		case 3:
		{
			scanf("%f",&num1);
			scanf("%f",&num2);
			resultado= num1*num2;
			printf("Resultado: %.2f",resultado);
			break;
		}
		case 4:
		{
			scanf("%f",&num1);
			scanf("%f",&num2);
			resultado= num1/num2;
			printf("Resultado: %.2f",resultado);
			break;
		}
		case 5:
		{
			scanf("%f",&num1);
			scanf("%f",&num2);
			scanf("%f",&num3);
			resultado= (num2*num2) - 4 * num1 * num3;
			printf("Resultado: %.2f",resultado);
			break;
		}
		default:
		printf("Erro");
	}
}
