#include <stdio.h>

int main ()
{
	
	int i, j, voto, totalvotos, sair, melhor, maior, votos[24];
	float votosporcentagem[24];
	
	totalvotos = 0;
	sair = 0;
	melhor = 0;
	maior = 0;

	for (i = 0; i < 24; i++){
		votos[i] = 0;
	}
	i = 0;
	
	do {
		voto = 0;
		printf ("\nVoto %d - (1 a 23) jogadores ou 0 encerrar a votacao: ", i+1);
		scanf ("%d", &voto);
	
		do{
			if (voto < 0 || voto > 23){	
				printf ("\nVOTO INVALIDO. TENTE NOVAMENTE\nVoto %d - (1 a 23) jogadores ou 0 encerrar a votacao: ", i+1);
				scanf ("%d", &voto);
			}
		} while (voto < 0 || voto > 23);
			
		totalvotos++;
		
		if (voto == 0){ 
			sair = 1;
		}
		
		if (voto != 0){
			for (j = 0; j < 24; j++){
				if (voto == j){
					votos[j]++; //computa no jogador de mesmo numero
				}
			}
		}
		i++;
	} while (sair == 0);
	totalvotos--;
	printf ("A) Total de votos computados: %d", totalvotos);
	printf ("\nB) TABELA - NUMERO DOS JOGADORES E VOTOS DE CADA");
	printf ("\n***********************\nJOGADORES\tVOTOS\n***********************\n");
	for (i = 1; i < 24; i++){
		printf ("%d\t\ | %d\n", i, votos[i]);
	}
	
	printf ("\nC) TABELA - NUMERO DOS JOGADORES E PORCENTUAIS DE VOTOS DE CADA");
	printf ("\n***********************\nJOGADORES\tVOTOS\n***********************\n");
	for (i = 1; i < 24; i++){
		votosporcentagem[i] = (votos[i]*100)/totalvotos;
		printf ("%d\t\ | %.2f %%\n", i, votosporcentagem[i]);
	}
	
	for (i = 0; i < 24; i++){
		if (votos[i] > maior){
			melhor = i;
			maior = votos[i];
		}
	}
	printf ("\nD) O MELHOR JOGADOR EM CAMPO\n");
	printf ("O melhor jogador em campo foi o de numero %d\n", melhor);
	printf ("Ele recebeu %d votos e %.2f %% de votos", maior, votosporcentagem[melhor]);
	
	system("pause");
	return 0;
}
