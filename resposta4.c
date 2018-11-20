#include <stdio.h>

int main()
{
	int i, j, vetA[10], vetB[15], maxA = 0, maxB = 0;

	printf ("Coloque os valores do vetor A: \n");
	for (i = 0; i < 10; i++){
		printf ("Valor %d: ", i+1);
		scanf ("%d", &vetA[i]);
	}

	printf ("Coloque os valores do vetor B: \n");
	for (i = 0; i < 15; i++){
		printf ("Valor %d: ", i+1);
		scanf ("%d", &vetB[i]);
	}
	printf ("\n");
	
	for (i = 0; i < 10; i++){
		if (vetA[i] > maxA) maxA = vetA[i];
	}
	printf ("O maior valor do vetor A: %d\n", maxA);
	
	
	for (i = 0; i < 15; i++){
		if (vetB[i] > maxB) maxB = vetB[i];
	}
	printf ("O maior valor do vetor B: %d\n\n", maxB);
	
	if(maxA == maxB){
		printf ("Ambos os vetores possuem os valores maximos");
	}
	if(maxA > maxB){
		printf ("O maior valor esta no vetor A: ", maxA);	
	}
	if(maxB < maxA){
		printf ("O maior valor esta no vetor B: ", maxB);	
	}
		
	printf ("\n\nOs elementos comuns nos vetores sao:\n ");
	for (i = 0; i < 10; i++){
		for (j = 0; j < 15; j++){
			if (vetA[i] == vetB[j]){
				printf ("%d ", vetA[i]);
				i++;
			}
		}
	}
	system("pause");
	return 0;
}
