#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void criptografa_frase (char *letra, int tamanho)
{


    int i;


    for (i = 0; i < tamanho; i++)
    {

        if ( isalpha( letra[i]) )
        {
            letra[i] += 3;
        }
    }



    char c_auxiliar;


    for (i = 0; i < tamanho/2; i++)
    {

        if (i != (tamanho-1-i) )
        {
            c_auxiliar = letra[i];
            letra[i] = letra[tamanho-2-i];
            letra[tamanho-2-i] = c_auxiliar;
        }
    }


    for (i = (tamanho-1)/2; i < tamanho; i++)
    {
        letra[i]--;
    }




    for (i = 0; i < tamanho-1; i++)
    {
        fprintf(stdout, "%c", letra[i]);
    }
}

int main()
{
    int i, NumeroDeTeste;
    char frase[1101], bn;

    scanf(stdin, "%d", &NumeroDeTeste);

    scanf(stdin, "%c", &bn);

    for (i = 0; i < NumeroDeTeste; i++)
    {
        fgets(frase, 1100, stdin);

        criptografa_frase( frase, strlen(frase) );

        fprintf(stdout, "\n");
    }

    return 0;
}
