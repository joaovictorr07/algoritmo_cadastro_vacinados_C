#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct teste
{
	char cpf [12];
};

int main()
{
	struct teste cadastro [99];
	char cpf [12], cpf2[12];
	int testecpf, i;
	setlocale(LC_ALL, "Portuguese");
	for (i=0; i<5; i++)
	{
			
	    do
	    {
		     printf ("\nDigite o CPF (somente digitos)");
	        scanf(cadastro[i].cpf);
	        testecpf = strlen(cadastro[i].cpf);
	        printf ("tamanho: %d", testecpf);
	        system ("pause");
	        
	        if ((testecpf < 11) || (testecpf > 11))
	        {
	        	printf ("\nCPF inválido");
			}

	      	    
        }   while (testecpf != 11);

    }
    for (i=0; i<5; i++)
    {
    	printf ("CPF na pos %d: %d", i, cadastro[i].cpf);
	}
    
    return (0);
	
}
