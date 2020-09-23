#include <stdio.h>
#include <stdlib.h>

int main()

{
	
	int n = 0, b = 0, Max=65535;
	
	while (!Max-b>=n)
	{
		b = n + b;
		n = n + 1;
	}
	printf("%d\n", b);
	printf("La valeur de n a ne pas depasser est %d", n);
	
	
	/*
	scanf_s("Entrez un nombre: %d", &n);
	for ( n=n+1)
	{
		b = b + n;
	}
	printf("La somme vaut %d", b);

	return 0;
	*/
	
	/*
	int i = 1;
	do
	{
		n = n + 1;
		b = n + b;
		
		
	} 
	while (n < 100);
	printf("%d", b);
	*/
	/*
	int i = 1;
	while (i<n && 65535>i+b)
	{
		i += 1;
		b += i;
	}
	printf("%d", b);
	*/
}
