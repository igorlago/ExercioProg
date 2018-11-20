#include<stdio.h>
#include<string.h>
int main()
{
	int peso, idade, altura, i, cont=0, soma, j=0, d=0, contp, porcentagem;
	int mediai [5];
	int mediaa;
	
	for(i=1; i<=55; i++)
	{
		j++;
		printf("Qual o peso do jogador %d :", i);
		scanf("%d",&peso);
		
		printf("Qual a idade do jogador %d :", i);
		scanf("%d",&idade);
		
		printf("Qual altura do jogador %d :", i);
		scanf("%d",&altura);
		
		if(idade<18)
		{
			cont++;
		}
		soma=soma +idade;
		if(j==11)
		{
			mediai[d] = soma/11;
			d++;
		}
		mediaa=mediaa+altura;
		if(peso>80)
		{
			contp++;
		}
	}
	mediaa=mediaa/55;
	porcentagem=(contp*100)/55;
	
	printf("A quantidade de jogadores com menos de 18 é: %d \n", cont);
	
	printf("A media de idade do time 1 é: %d \n", mediai[1]);
	printf("A media de idade do time 2 é: %d \n", mediai[2]);
	printf("A media de idade do time 3 é: %d \n", mediai[3]);
	printf("A media de idade do time 4 é: %d \n", mediai[4]);
	printf("A media de idade do time 5 é: %d \n", mediai[5]);
	
	printf("A media de altura dos jogadores é: %d \n", mediaa);
	
	printf("%d % dos jogadores tem mais de 80kg \n", porcentagem;
	
	system("pause");
	return 0;
}
