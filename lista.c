#include <stdio.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL,"portuguese");
	int vet[20],i,impar,par,b;
	for(i=0;i<20;i++)
	{
		printf("\nDigite o nº %d: ",i);
		scanf("%d",&vet[i]);
	}
	printf("\n------LISTA GERAL------");
	for(i=0;i<20;i++)
	{
		printf("\nO %d está no índice %d.",vet[i],i);
	}
	printf("\n------LISTA PAR------");
	for(i=0;i<20;i++)
	{
		b = vet[i]%2;
		if (b == 0)
		{
			printf("\nO %d é par e está no índice %d.",vet[i],i);
		}
	}
	printf("\n------LISTA ÍMPAR------");
	for(i=0;i<20;i++)
	{
		b = vet[i]%2;
		if (b == 1)
		{
			printf("\nO %d é ímpar e está no índice %d.",vet[i],i);
		}
	}
}
