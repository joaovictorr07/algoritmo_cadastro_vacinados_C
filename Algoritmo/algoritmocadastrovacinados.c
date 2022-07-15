#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct vacinados
{
	int codigo;
	char nome [50];
	int CPF;
	char vacina [15];
	char data [11];
	int numlote;	
};
struct vacinados cadastro [999];
int controlecod;

int cadastros ()
{
	  setlocale(LC_ALL, "Portuguese");
	int i, tam;
	system ("cls");
	printf ("Quantos vacinados deseja cadastrar: ");
	scanf ("%d", &tam);
	fflush (stdin);
	for (i=controlecod; i<controlecod + tam; i++)
	{
		printf ("Nome completo: ");
		scanf ("%50[^\n]s", &cadastro[i].nome);
		fflush(stdin);
		printf ("CPF (somente dígitos, sem pontos ou traço): ");
		scanf ("%d", &cadastro[i].CPF);
		fflush (stdin);
		printf ("Vacina aplicada: ");
		scanf ("%15 [^\n]s", &cadastro[i].vacina);
		fflush(stdin);
		printf ("Data da aplicação (DD/MM/AAAA): ");
		scanf ("%11[^\n]s", &cadastro[i].data);
		fflush (stdin);
		printf ("Numero do lote: ");
		scanf ("%d", &cadastro[i].numlote);
		fflush (stdin);
		cadastro[i].codigo = i;		
	}
	controlecod = controlecod + tam;
	system ("pause");
	return (0);
}
int listar ()
{
	  setlocale(LC_ALL, "Portuguese");
	int i;
	system ("cls");
	for (i=0; i < controlecod; i++)
	{
		printf ("Código: %d \n", cadastro[i].codigo);
		printf ("Nome: %s \n", cadastro[i].nome);
		printf ("CPF: %d \n", cadastro[i].CPF);
		printf ("Vacina: %s \n", cadastro[i].vacina);
		printf ("Data: %s \n", cadastro[i].data);
		printf ("Número do lote: %d", cadastro[i].numlote);
		printf ("\n ================== \n");
	}
	system ("pause");
	return (0);
}
int pesquisa ()
{
	  setlocale(LC_ALL, "Portuguese");
	int i, acha, pesquisa;
	system ("cls");
	printf ("Qual CPF deseja buscar:");
	scanf ("%d", &pesquisa);
	acha = 0;
	i = 0;
	while ((i<controlecod) && (acha==0))
	{
		if (cadastro[i].CPF == pesquisa)
		{
			acha = 1;
		}
		else
		{
			i++;
		}
	}
	if (acha ==1)
	{
		printf ("Cadastro localizado \n");
		printf ("Código: %d \n", cadastro[i].codigo);
		printf ("Nome: %s \n", cadastro[i].nome);
		printf ("CPF: %d \n", cadastro[i].CPF);
		printf ("Vacina: %s \n", cadastro[i].vacina);
		printf ("Data: %s \n", cadastro[i].data);
		printf ("Número do lote: %d \n", cadastro[i].numlote);
	}
	else
	{
		printf ("Registro não localizado \n");
	}
	system ("pause");
	return (0);
}

int main ()
{
	  setlocale(LC_ALL, "Portuguese");
	int op;
	while ( op !=4)
	{
		system ("cls");
		printf ("1 - cadastrar vacina \n");
		printf ("2 - Listar aplicações \n");
		printf ("3 - Consultar por CPF \n");
		printf ("4 - Sair \n");
		printf ("Escolha uma opcao: \n");
		scanf ("%d", &op);
		fflush (stdin);
		if (op ==1)
		{
			cadastros ();
		}
		else
		{
			if (op == 2)
			{
				listar ();
			}
			else
			{
				if (op == 3)
				{
					pesquisa ();
				}
				if (op == 4)
				{
					printf ("Saindo...");
				}
			}
		}
    }
    return (0);
}
