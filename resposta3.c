#include <stdio.h>
int main()
{
	int i, cre=0, dec=0, vetor[11];
	
	for(i=0; i<10; i++)
	{
		printf("Entre com o elemento %d do vetor",i+1);
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<10;i++)
	{
		if(vetor[i]<vetor[i+1])
		{
			cre++;
		}
		if(vetor[i]>vetor[i+1])
		{
			dec++;
		}
	}
	if(cre==10)
	{
		printf("CRESCENTE");
	}
	else if(dec==9)
	{
		printf("DECRESENTE");
	}
	else
	{
		printf("VETOR FORA DE ORDEM");
	}
	
	system("pause");
	return 0;
}
