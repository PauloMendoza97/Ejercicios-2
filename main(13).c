#include <stdio.h>
#include <stdlib.h>
/*Escriba un programa que imprima el histograma de las longitudes de las palabras de su entrada.
Es f�cil dibujar el histograma con las barras horizontales; la Orientaci�n vertical es un reto m�s interesante. */

int main()
{
    int c,cont=0,esp=0,tab=0;
    c=getchar();
    while(c!=10){

		if (c==32&&cont<1)
		{
		    cont++;
		    printf("\n");
		}
		if (c==9&&cont<1)
		{
		    cont++;
		    printf("\n");
		}
		if (c!=9&&c!=32)
        {
            printf("*");
            cont=0;
        }

	c=getchar();
	}
	return 0;
}
