#include <stdio.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL,"portuguese");
	float vet[10],b=0,c=0,c_maior=0,c_menor=10;
	int i;
	for(i=1;i<=10;i++)
	{
		printf("\nDigite a nota do aluno nº%d: ",i);
		scanf("%f",&vet[i]);
		b+=vet[i];
		if(vet[i] > c_maior)
    		{
        	c_maior = vet[i];
    		}
		if(vet[i] < c_menor)
        	{
            	c_menor = vet[i];
        	}
	}
	c = b/10;
	printf("------RELATÓRIO DA TURMA------");
	for(i=1;i<=10;i++)
	{
		printf("\nO aluno %d possui a nota: %.1f",i,vet[i]);
	}
	printf("\n------ALUNOS HONORÁRIOS------");
	for(i=1;i<=10;i++)
	{
		if (vet[i] > c)
		{
			printf("\nO aluno %d ficou à cima da média da turma com a nota: %.1f",i,vet[i]);
		}
	}
	printf("\n------MAIOR E MENOR NOTA------\nA maior nota foi: %.1f.\nA menor nota foi: %.1f.",c_maior,c_menor);
	printf("\n------------------------------\nA média da turma foi: %.1f\n------------------------------",c);
}
