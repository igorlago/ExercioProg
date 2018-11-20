#include <stdio.h>

int main()
{

	int i, j, vetor[15];
	
	printf ("COMPACTACAO DE VETORES\n\n");
	for (i = 0; i < 15; i++){
		printf ("Entre com o valor %d: ", i+1);
		scanf ("%d", &vetor[i]);
	}
	printf ("\n\nO vetor NAO compactado fica: ");
	for (i = 0; i < 15; i++){
		printf ("%d ", vetor[i]);
	}
	printf ("\nO vetor compactado fica: ");
	
	for (i = 0; i < 15; i++){
		if (vetor[i] == 0){
			for (j = i; j < 15; j++){
			vetor[j] = vetor[j+1];
			}
		}
	}
	
	for (i = 0; i < 15; i++){
		if (vetor[i] != 0) printf ("%d", vetor[i]);	
	}
	system("pause");
	return 0;
}
