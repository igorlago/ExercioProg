#include <stdio.h>

int main()
{
	
	int i, t, vetor[10], maior, tam[10];
	
	i = 0;
	t = 0;
	
	for (i = 0; i < 10; i++){
		printf ("Insira o vetor %d: ", i+1);
		scanf ("%d", &vetor[i]);
	}
	printf ("\n\n");
	
	printf ("Vetor A:[ ");
	for (i = 0; i < 10; i++){
		printf ("%d ", vetor[i]);
	}
	printf ("]");	
	
	for (i = 0; i < 10; i++){
		tam[i] = 1;
	}
	
	for (i = 0; i < 10; i++){
		if (vetor[i] == vetor[i+1]) tam[t]++;
		if (vetor[i] != vetor[i+1]) t++;
	}
	
	t = 0;
	for (i = 0; i < 10; i++){
		if (tam[i] > t) t = tam[i];
	}
	printf ("\nt = %d", t);
	
	system("pause");
	return 0;
}
