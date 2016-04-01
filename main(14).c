#include <stdio.h>
/* Escriba un programa que imprima el histograma de las frecuencias con que se presentan diferentes caracteres le�dos a la entrada. */
int main( )
{
    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i) ndigit[i] = 0;
    while ((c = getchar( )) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++ nwhite;
        else ++ nother;
        (c = getchar( )) != EOF;
    }
    printf ("d�gitos = ");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", espacios blancos = %d, otros = %d\n", nwhite, nother);
}
