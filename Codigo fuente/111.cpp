#include <stdio.h>
int main()
{
	int c, a, b, d;
	printf("numero 1:");
	scanf("%i", &a);
	printf("numero 2:");
	scanf("%i",&b);
	c=a/b;
	printf("cociente: %i", c);
	d=a%b;
	printf("\nresiduo: %i",d);
}
