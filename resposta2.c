#include <stdio.h>
#include <string.h>
int main()

{
	int i = 0, cont = 0;
	char c[5];
	
	printf ("\nTelefonou para a vitima?");
	scanf ("%s", &c[i++]);
	 
	printf ("\nEsteve no local do crime?");
	scanf ("%s", &c[i++]);
	
	printf ("\nMora perto da vitima?");
	scanf ("%s", &c[i++]);
	
	printf ("\nDevia para a vitima?");
	scanf ("%s", &c[i++]);
	
	printf ("\nJa trabalhou com a vitima?");
	scanf ("%s", &c[i++]);

	for (i= 0; i < 5; i++)
	{
		if (c[i]==115)
		{
			cont++;
		}
	}	


	if (cont == 2)
	{
		printf ("Suspeito");
	}
	else if (cont == 3 || cont == 4)
	{
		printf ("Cumplice");
	}
	else if (cont == 5)
	{
		printf ("Assassino");
	}
	else
	{
		printf ("Inocente");
	}
	
return 0;
}
