#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int a, b, c, delta;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	delta=(b*b)-(4*a*c);
	
	printf("%d",delta);
}
