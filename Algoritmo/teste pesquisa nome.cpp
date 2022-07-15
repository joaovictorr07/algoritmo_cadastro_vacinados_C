#include <stdio.h>
#include <stdlib.h>

struct teste
{
	char nome [30];
};
int main ()
{
	struct teste cadastro [3];
	int i, acha;
	char pesquisa [30];
	
	for (i = 0; i < 3; i++)
	{
		
		printf ("Digite um nome: ");
		scanf ("%50[^\n]s", &cadastro[i].nome);
		fflush (stdin);
	}
	printf ("Nome para pesquisar");
	scanf ("%s", &pesquisa);
	fflush (stdin);
	i = 0;
	acha = 0;
	while ((i < 2) && (acha == 0))
	{
		if (cadastro[i].nome == pesquisa)
		acha = 1;
		else
		i++;
	}
	if (acha == 1)
	printf ("Localizado");
	else
	printf ("nao localizado");
	
	return (0);	
	
	
}
